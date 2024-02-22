#include "Application.h"

#include "Screen.h"
#include "GameInstance.h"
#include "Utilities/Config.h"

namespace Soarks
{
	Application::Application()
		: m_game{ nullptr }, m_config{ nullptr }, m_screen{ nullptr }
	{
	}
	Application::~Application()
	{
		delete m_game;
		m_game = nullptr;

		delete m_config;
		m_config = nullptr;

		delete m_screen;
		m_screen = nullptr;
	}
	void Application::Run(GameInstance* _game)
	{
		// TODO load config
		m_screen = new Screen(m_config);

		m_screen->Open();

		m_game = _game;
		m_game->m_screen = m_screen;
		m_game->BeginPlay();

		while (!WindowShouldClose())
		{
			float dt = GetFrameTime();

			m_game->Tick(dt);

			m_screen->NewFrame();

			m_game->Render();

			m_screen->EndFrame();
		}

		m_game->EndPlay();
		m_screen->Close();
	}
}
