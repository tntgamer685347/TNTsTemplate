#include "Main.hpp"
#include "../Includes.hpp"
#include "../Modules/Includes.hpp"
#include "../../Example.hpp" // include your module


MainComponent::MainComponent() : Component("Main", "Interface to game interacton") { OnCreate(); }

MainComponent::~MainComponent() { OnDestroy(); }

void MainComponent::OnCreate() {}

void MainComponent::OnDestroy() {}

void MainComponent::Initialize() {
    Main.Execute([]() {
        Example.Initialize(); // initalize it
    });
}

void MainComponent::SpawnNotification(const std::string& Title, const std::string& Content, int Duration, UClass* NotificationClass)
{
    // Keep the proper null checks and static initialization
    UNotificationManager_TA* NotificationManager = Instances.GetInstanceOf<UNotificationManager_TA>();
    if (!NotificationManager) {
        Console.Error("Could not get NotificationManager instance.");
        return;
    }

    // Keep the proper static initialization pattern
    static UFunction* PopUp_UFunc = nullptr;
    if (!PopUp_UFunc) {
        PopUp_UFunc = UObject::FindObject<UFunction>("Function TAGame.NotificationManager_TA.PopUpOnlyNotification");
    }

    if (!PopUp_UFunc) {
        Console.Error("UObject::FindObject failed for PopUpOnlyNotification.");
        return;
    }

    if (!NotificationClass) {
        NotificationClass = UGenericNotification_TA::StaticClass();
    }

    if (!NotificationClass) {
        Console.Error("NotificationClass is null.");
        return;
    }

    // Keep the proper struct initialization
    struct UNotificationManager_TA_execPopUpOnlyNotification_Params {
        UClass* NotificationClass;
        UNotification_TA* ReturnValue;
    } params = {};
    params.NotificationClass = NotificationClass;

    NotificationManager->ProcessEvent(PopUp_UFunc, &params);

    UNotification_TA* Notification = params.ReturnValue;
    if (Notification) {
        Notification->PopUpDuration = Duration;

        // Keep the static patterns for these too
        static UFunction* SetTitle_UFunc = nullptr;
        if (!SetTitle_UFunc) {
            SetTitle_UFunc = UObject::FindObject<UFunction>("Function TAGame.Notification_TA.SetTitle");
        }

        if (SetTitle_UFunc) {
            struct UNotification_TA_execSetTitle_Params { FString NewTitle; };
            UNotification_TA_execSetTitle_Params titleParams = {};
            titleParams.NewTitle = Format::ToFString(Title);
            Notification->ProcessEvent(SetTitle_UFunc, &titleParams);
        }

        static UFunction* SetBody_UFunc = nullptr;
        if (!SetBody_UFunc) {
            SetBody_UFunc = UObject::FindObject<UFunction>("Function TAGame.Notification_TA.SetBody");
        }

        if (SetBody_UFunc) {
            struct UNotification_TA_execSetBody_Params { FString NewBody; };
            UNotification_TA_execSetBody_Params bodyParams = {};
            bodyParams.NewBody = Format::ToFString(Content);
            Notification->ProcessEvent(SetBody_UFunc, &bodyParams);
        }
    }
}


std::vector<std::function<void()>> MainComponent::GameFunctions;

class MainComponent Main {};