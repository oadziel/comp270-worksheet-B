#include "stdafx.h"
#include "Controller.h"

float Controller::calculateShotSpeed(const Vector2& tankPos, const Vector2& enemyPos, float shotAngleRadians, float gravity)
{
	// TODO: calculate the required shot speed (in pixels per second) and return it
	return 700;
}

float Controller::calculateShotAngle(const Vector2& tankPos, const Vector2& enemyPos, float shotSpeed, float gravity)
{
	// TODO: calculate the required shot angle (in radians) and return it
	return M_PI * 0.25f;
}

