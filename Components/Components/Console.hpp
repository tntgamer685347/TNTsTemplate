#pragma once
#include "../Component.hpp"

enum class TextColors : uint16_t
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Aqua = 3,
	Red = 4,
	Purple = 5,
	Yellow = 6,
	White = 7,
	Grey = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightAqua = 11,
	LightRed = 12,
	LightPurple = 13,
	LightYellow = 14,
	BrightWhite = 15
};

// Manages the standard out stream, as well as logging to an offline file.
class ConsoleComponent : public Component
{
private:
	std::ofstream LogFile;
	HANDLE OutputHandle;
	FILE* OutputFile;
	bool WriteToLog;
	bool WriteTimestamp;

public:
	ConsoleComponent();
	~ConsoleComponent() override;

public:
	void OnCreate() override;
	void OnDestroy() override;

public:
	void Write(const std::string& text, TextColors textColor = TextColors::BrightWhite);
	void WriteInternal(std::string text, TextColors textColor);
	void Warning(const std::string& text);
	void Error(const std::string& text);
	void Success(const std::string& textt);
	void Notify(const std::string& text);

public:
	void Debug(const std::string& text, const char* file, int line);
	void Debug(const FString& text, const char* file, int line);
	void Debug(const int& number, const char* file, int line);

public:
	void Initialize(const std::filesystem::path& directory, const std::string& fileName);
	void ToggleLogging(bool bWriteToLog);
	void ToggleTimestamp(bool bWriteTimestamp);
	void SetTextColor(TextColors textColor);
	static std::string GetTimestamp(const bool& bWithSpace);
};

extern class ConsoleComponent Console;