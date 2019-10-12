#pragma once

#include "Vector2.h"

class Controller
{
public:
	float calculateShotSpeed(const Vector2& tankPos, const Vector2& enemyPos, float shotAngleRadians, float gravity);

	const float c_canHandleHeightDifference = false;

};
