#include "Drawing.hpp"
#include "../Components/Includes.hpp"

#include "../ImGui/imgui.h"
#include "../ImGui/imgui_impl_win32.h"
#include "../ImGui/imgui_impl_dx11.h"

#define UCONST_Pi 3.1415926
#define URotation180  32768 
#define URotationToRadians  UCONST_Pi / URotation180 

Drawing::Drawing(const std::string& name, const std::string& description, uint32_t states) : Module(name, description, states) {}
Drawing::~Drawing() {}



FVector RotationToVector(FRotator R)
{
	FVector Vec;
	float fYaw = R.Yaw * URotationToRadians;
	float fPitch = R.Pitch * URotationToRadians;
	float CosPitch = cos(fPitch);
	Vec.X = cos(fYaw) * CosPitch;
	Vec.Y = sin(fYaw) * CosPitch;
	Vec.Z = sin(fPitch);

	return Vec;
}

float Size(FVector& v)
{
	return sqrt(v.X * v.X + v.Y * v.Y + v.Z * v.Z);
}

void Normalize(FVector& v)
{
	float size = Size(v);

	if (!size)
	{
		v.X = v.Y = v.Z = 1;
	}
	else
	{
		v.X /= size;
		v.Y /= size;
		v.Z /= size;
	}
}

void inline GetAxes(FRotator R, FVector& X, FVector& Y, FVector& Z)
{
	X = RotationToVector(R);
	Normalize(X);
	R.Yaw += 16384;
	FRotator R2 = R;
	R2.Pitch = 0.f;
	Y = RotationToVector(R2);
	Normalize(Y);
	Y.Z = 0.f;
	R.Yaw -= 16384;
	R.Pitch += 16384;
	Z = RotationToVector(R);
	Normalize(Z);
}

FLOAT VectorDotProduct(FVector* pV1, FVector* pV2)
{
	return ((pV1->X * pV2->X) + (pV1->Y * pV2->Y) + (pV1->Z * pV2->Z));
}
FVector* VectorSubtract(FVector* pOut, FVector* pV1, FVector* pV2)
{
	pOut->X = pV1->X - pV2->X;
	pOut->Y = pV1->Y - pV2->Y;
	pOut->Z = pV1->Z - pV2->Z;

	return pOut;
}

FVector Drawing::CalculateScreenCoordinate(FVector Location)
{
	APlayerController* aPC = Instances.IAPlayerController();
	FVector Return;

	FVector AxisX, AxisY, AxisZ, Delta, Transformed;
	FRotator MYCam = aPC->PlayerCamera->Rotation;

	GetAxes(MYCam, AxisX, AxisY, AxisZ);


	VectorSubtract(&Delta, &Location, &aPC->PlayerCamera->Location);
	Transformed.X = VectorDotProduct(&Delta, &AxisY);
	Transformed.Y = VectorDotProduct(&Delta, &AxisZ);
	Transformed.Z = VectorDotProduct(&Delta, &AxisX);

	if (Transformed.Z < 1.00f)
		Transformed.Z = 1.00f;

	float FOVAngle = aPC->PlayerCamera->GetFOVAngle();

	Return.X = (GUI.DisplayX / 2.0f) + Transformed.X * ((GUI.DisplayX / 2.0f) / tan(FOVAngle * UCONST_Pi / 360.0f)) / Transformed.Z;
	Return.Y = (GUI.DisplayY / 2.0f) + -Transformed.Y * ((GUI.DisplayY / 2.0f) / tan(FOVAngle * UCONST_Pi / 360.0f)) / Transformed.Z;
	Return.Z = 0;

	return Return;
}

