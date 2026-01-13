#include "Extras.hpp"


FString FString::create(const FString& old) { return UObject::RepeatString(old, 1); }

#ifndef USE_GMALLOC
FString FString::create(const std::string& str)
{
	std::wstring wideStr = StringUtils::ToWideString(str);
	return UObject::RepeatString(wideStr.data(), 1);
}
#else
FString FString::create(const std::string& str)
{
	FString      out;
	std::wstring text = StringUtils::ToWideString(str);
	if (text.empty())
		return out;

	size_t len   = text.size();
	size_t bytes = (len + 1) * sizeof(wchar_t);
	auto*  data  = static_cast<wchar_t*>(GMalloc.Malloc(static_cast<SIZE_T>(bytes)));
	if (!data)
		return out;

	memcpy(data, text.c_str(), bytes);
	out.ArrayData  = data;
	out.ArrayCount = static_cast<int32_t>(len + 1);
	out.ArrayMax   = out.ArrayCount;
	return out;
}
#endif


#ifndef USE_GMALLOC
namespace TArrayUtils
{
bool extendCapacity(void* inOldTArray, int32_t newCapacity, void* outNewTArray, int32_t elementSize)
{
	if (inOldTArray == outNewTArray)
		throw std::logic_error("extendCapacity: input and output TArray pointers must not alias");

	auto*        oldArray    = reinterpret_cast<TArrayBase*>(inOldTArray);
	auto*        newArray    = reinterpret_cast<TArrayBase*>(outNewTArray);
	const size_t newByteSize = static_cast<size_t>(newCapacity) * elementSize;

	if (!oldArray || !newArray || elementSize == 0 || newCapacity <= 0 || newCapacity <= oldArray->capacity)
		return false;

	// use UObject::RepeatString to allocate buffer using UE
	const size_t requiredWChars = (newByteSize + 1) / sizeof(wchar_t);                     // +1 to force ceiling
	FString      fstr = UObject::RepeatString(L"A", static_cast<int32_t>(requiredWChars)); // actually allocates requiredWChars + 1
	                                                                                       // (for '\0')... but thats fine

	// verify buffer size
	const size_t allocatedBytes = fstr.size() * sizeof(wchar_t);
	if (allocatedBytes < newByteSize)
		return false;

	// copy over data from old TArray
	void* newData = *reinterpret_cast<void**>(&fstr);                   // yoink internal buffer from FString
	ZeroMemory(newData, allocatedBytes);                                // zero it out
	std::memcpy(newData, oldArray->data, oldArray->size * elementSize); // copy existing data to newly created buffer

	// fill in member values for new TArray
	newArray->data     = newData;
	newArray->size     = oldArray->size;
	newArray->capacity = newCapacity;

	// set FString's data member (wchar_t*) to be nullptr, to prevent UE's FString destructor from trying to free the memory
	*reinterpret_cast<void**>(&fstr) = nullptr;
	return true;
}
} // namespace TArrayUtils
#endif



// ###############################################################################################
// #################################    Unreflected UE3 Stuff    #################################
// ###############################################################################################



