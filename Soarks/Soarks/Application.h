#pragma once

namespace Soarks
{
	class GameInstance;
	class Config;
	class Screen;

	class Application
	{
	public:
		Application();
		~Application();

	public:
		void Run(GameInstance* _game);

	private:
		GameInstance* m_game;
		Config* m_config;
		Screen* m_screen;
	};
}

