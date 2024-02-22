#pragma once

namespace Soarks
{
	class Screen;

	class GameInstance
	{
		friend class Application;

	public:
		virtual void BeginPlay();

		virtual void Tick(float _deltaTime);
		virtual void Render();

		virtual void EndPlay();
		

	protected:
		Screen* m_screen;

	protected:
		GameInstance();
		virtual ~GameInstance();

	private:
		// TODO fill this out
	};
}