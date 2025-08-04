#include "Drawing.hpp"
#include "../Components/Includes.hpp"
#include "../ImGui/imgui.h"

// This constant is taken directly from your working code.
#define URotationToRadians 3.1415926535f / 32768.0f

// Vector math helpers from your working code
inline FVector operator-(const FVector& A, const FVector& B) {
    return { A.X - B.X, A.Y - B.Y, A.Z - B.Z };
}
inline float VectorDotProduct(const FVector& A, const FVector& B) {
    return A.X * B.X + A.Y * B.Y + A.Z * B.Z;
}

// Constructor/Destructor are fine
Drawing::Drawing(const std::string& name, const std::string& description, uint32_t states) : Module(name, description, states) {}
Drawing::~Drawing() {}


// =====================================================================================
// This is the direct implementation of your proven WorldToScreen logic. No prediction.
// =====================================================================================
FVector Drawing::CalculateScreenCoordinate(FVector WorldLocation, APlayerController_TA* PC)
{
    FVector ReturnVec{ 0, 0, 1 }; // Z=1 means off-screen/failed

    if (!PC) { return ReturnVec; }

    // --- Step 1: Get Camera Data (Logic from your GetCameraData function) ---
    uintptr_t cameraAddr = SafeRead<uintptr_t>((uintptr_t)PC + Offsets::Engine::PlayerController::PlayerCamera);
    if (!cameraAddr) {
        return ReturnVec;
    }

    FVector cameraLocation = SafeRead<FVector>(cameraAddr + Offsets::Engine::Actor::Location);
    FRotator cameraRotation = SafeRead<FRotator>(cameraAddr + Offsets::Engine::Actor::Rotation);
    float cameraFOV = SafeRead<float>(cameraAddr + Offsets::Engine::Camera::DefaultFOV);

    // Critical safety check from your code to prevent crashes
    if (cameraFOV <= 1.0f) {
        cameraFOV = 90.0f;
    }

    // --- Step 2: World-to-Screen Math (Logic from your WorldToScreen function) ---
    INT32 ViewportSizeX = GUI.DisplayX;
    INT32 ViewportSizeY = GUI.DisplayY;
    if (ViewportSizeX <= 0 || ViewportSizeY <= 0) {
        return ReturnVec;
    }

    float SY = sin(cameraRotation.Yaw * URotationToRadians);
    float CY = cos(cameraRotation.Yaw * URotationToRadians);
    float SP = sin(cameraRotation.Pitch * URotationToRadians);
    float CP = cos(cameraRotation.Pitch * URotationToRadians);

    FVector AxisX = { CP * CY, CP * SY, SP };
    FVector AxisY = { -SY, CY, 0 };
    FVector AxisZ = { -SP * CY, -SP * SY, CP };

    FVector Delta = WorldLocation - cameraLocation;
    FVector Transformed;
    Transformed.X = VectorDotProduct(Delta, AxisY);
    Transformed.Y = VectorDotProduct(Delta, AxisZ);
    Transformed.Z = VectorDotProduct(Delta, AxisX);

    if (Transformed.Z < 1.0f) {
        return ReturnVec; // Object is behind the camera
    }

    // --- Step 3: Projection onto Screen ---
    float FOVRadians = cameraFOV * (3.14159265f / 180.0f);
    float TanHalfFOV = tan(FOVRadians / 2.0f);

    float ScreenCenterX = ViewportSizeX / 2.0f;
    float ScreenCenterY = ViewportSizeY / 2.0f;

    ReturnVec.X = ScreenCenterX + Transformed.X * (ScreenCenterX / TanHalfFOV) / Transformed.Z;
    ReturnVec.Y = ScreenCenterY - Transformed.Y * (ScreenCenterX / TanHalfFOV) / Transformed.Z;
    ReturnVec.Z = 0; // Z=0 indicates success and on-screen

    return ReturnVec;
}