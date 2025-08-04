#pragma once
#include "../Component.hpp"

class MainComponent : public Component
{
public:
	MainComponent();
	~MainComponent() override;

	void OnCreate() override;
	void OnDestroy() override;

	void Initialize();

public:
	static std::vector<std::function<void()>> GameFunctions;

	static void Execute(std::function<void()> FunctionToExecute)
	{
		GameFunctions.push_back(FunctionToExecute);
	}

	static void SpawnNotification(const std::string& Title, const std::string& Content, int Duration, UClass* NotificationClass = nullptr);

};

extern class MainComponent Main;