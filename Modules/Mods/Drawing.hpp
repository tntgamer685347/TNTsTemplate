#pragma once
#include "../Module.hpp"
// Note: FVector, APlayerController_TA are expected to be included
// via a common header like "Includes.hpp" in your .cpp files.

class Drawing : public Module
{
private:
	Drawing(const std::string& name, const std::string& description, uint32_t states);
	~Drawing() override;

public:
	/**
	 * \brief Calculates the screen coordinate for a static world location.
	 * This is a direct implementation of the proven logic from your GameEventHook.
	 * \param WorldLocation The point in the world to draw.
	 * \param PC The player controller for the camera's point of view.
	 * \return A FVector where X,Y are screen coordinates and Z is 0 for on-screen, 1 for off-screen.
	 */
	static FVector CalculateScreenCoordinate(FVector WorldLocation, APlayerController_TA* PC);
};