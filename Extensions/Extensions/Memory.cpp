#include "Memory.hpp"

namespace Memory
{
    std::vector<BYTE> ReadBytes(PVOID Address, SIZE_T BytesLength)
    {
        std::vector<BYTE> Buffer(BytesLength);
        ReadProcessMemory(GetCurrentProcess(), Address, Buffer.data(), BytesLength, NULL);

        return Buffer;
    };

    int BytesToInt32(BYTE* input, int startOffset)
    {
        int length = sizeof(input) / sizeof(BYTE);
        std::vector<BYTE> d_vector(input, input + length);

        return (input[startOffset]) | (input[startOffset + 1] << 8) |
            (input[startOffset + 2] << 16) | (input[startOffset + 3] << 24);
    }

    uintptr_t FindPattern(HMODULE module, const unsigned char* pattern, const char* mask)
    {
        MODULEINFO info = { };
        GetModuleInformation(GetCurrentProcess(), module, &info, sizeof(MODULEINFO));

        uintptr_t start = reinterpret_cast<uintptr_t>(module);
        size_t length = info.SizeOfImage;

        size_t pos = 0;
        size_t maskLength = std::strlen(mask) - 1;

        for (uintptr_t retAddress = start; retAddress < start + length; retAddress++)
        {
            if (*reinterpret_cast<unsigned char*>(retAddress) == pattern[pos] || mask[pos] == '?')
            {
                if (pos == maskLength)
                {
                    return (retAddress - maskLength);
                }

                pos++;
            }
            else
            {
                retAddress -= pos;
                pos = 0;
            }
        }

        return NULL;
    }

	void fstringcpy(struct FString& destination, struct FString& source)
	{
		memcpy_s(&destination, sizeof(destination), &source, sizeof(source));
	}

	void fnamecpy(struct FName& destination, const wchar_t* source)
	{
        wcscpy_s(destination.GetEntry()->Name, source);
	}
}