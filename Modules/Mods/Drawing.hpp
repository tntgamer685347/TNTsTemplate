#pragma once
#include "../Module.hpp"

class Drawing : public Module
{
private:
	Drawing(const std::string& name, const std::string& description, uint32_t states);
	~Drawing() override;

public:
	static FVector CalculateScreenCoordinate(FVector Location);
};

