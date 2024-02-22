#include "Soarks/Application.h"
#include "Soarks/GameInstance.h"

#include "raylib/raylib.h"

using Soarks::Application;
using Soarks::GameInstance;

class TestGame : public GameInstance
{
public:
	void Render() override
	{
		DrawCircle(100, 100, 50, RED);
	}
};

int main()
{
	Application* app = new Application();

	app->Run(new TestGame());

	delete app;

	return 0;
}