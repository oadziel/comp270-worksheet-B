#pragma once

#include "Controller.h"
#include "Vector2.h"
#include "Sprite.h"

class Application
{
public:
	Application();

	bool run();

private:
	bool initSDL();
	void shutdownSDL();

	void restartGame();

	void processEvent(const SDL_Event &e);
	void render();

	float random(float min, float max);

	const int c_windowWidth = 800;
	const int c_windowHeight = 600;

	SDL_Window *m_window = nullptr;
	SDL_Renderer *m_renderer = nullptr;

	std::random_device m_randomDevice;
	std::mt19937 m_random;

	Controller m_controller;

	std::unique_ptr<Sprite> m_spriteTankBody, m_spriteTankTracks, m_spriteTankTurret;
	std::unique_ptr<Sprite>	m_spriteBullet, m_spriteTarget, m_spriteEnemyTank;

	Vector2 m_tankPos, m_targetPos, m_bulletPos, m_bulletVel;
	float m_turretAngle;
	bool m_isBulletActive = false;
	const float c_gravity = 1000;
	float m_wind = 0.0f;
	std::vector<Vector2> m_bulletTrail;

	bool m_quit = false;
};

