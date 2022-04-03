#pragma once
#include "DestroyableGroundObject.h"


class TankAdapter : public DestroyableGroundObject
{
public:
	void SetPos(double nx, double ny);
	uint16_t GetWidth() const;
	void Draw() const;
	bool __fastcall isInside(double x1, double x2) const;
	double GetY() const { return y; }
	double GetX() const { return x; }
	void SetWidth(uint16_t widthN) { width = widthN; }
	inline uint16_t GetScore() const override { return tank.GetScore(); }
};

