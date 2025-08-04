#pragma once
#include "../pch.hpp"
#include "../Extensions/Includes.hpp"

template<typename T>
bool TryReadMemory(uintptr_t address, T* result) {
    __try {
        *result = *reinterpret_cast<T*>(address);
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

// Safe wrapper function that uses the C-style reader
template <typename T>
T SafeRead(uintptr_t address) {
    T result = T{};
    TryReadMemory(address, &result);
    return result;
}


template <typename T>
bool SafeWrite(uintptr_t address, T value)
{
    // First, check if the address is null.
    if (address == 0)
    {
        return false;
    }

    __try
    {
        // Attempt the risky memory write.
        *reinterpret_cast<T*>(address) = value;
        return true; // Success!
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        // The write failed.
        return false;
    }
}

template<typename T>
std::string to_hex(T i)
{
    std::stringstream stream;
    stream << "0x" << std::hex << i;
    return stream.str();
}

// Base class for all in-game modules.
class Module
{
private:
	std::string Name;				// Modules name.
	std::string FormattedName;		// Modules formatted name.
	std::string Description;		// Modules description.
	uint32_t AllowedStates;			// Game states that this module can be used in.
	bool Initialized;				// If the modules settings have been loaded, and it's safe to use its functions.

public:
	Module(const std::string& name, const std::string& description, uint32_t states);
	virtual ~Module();

public:
	std::string GetName() const;
	std::string GetNameFormatted() const;
	std::string GetDescription() const;
	uint32_t GetAllowedStates() const;
	bool IsAllowed() const;
	bool IsInitialized() const;
	void SetInitialized(bool bInitialized);
};