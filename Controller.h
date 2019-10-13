#pragma once

#include "Vector2.h"

class Controller
{
public:
	float calculateShotSpeed(const Vector2& tankPos, const Vector2& enemyPos, float shotAngleRadians, float gravity);
	float calculateShotAngle(const Vector2& tankPos, const Vector2& enemyPos, float shotSpeed, float gravity);

	const float c_canHandleHeightDifference = false;
	const float c_canHandleWind = false;
	const float c_doCalculateAngle = false;
};
