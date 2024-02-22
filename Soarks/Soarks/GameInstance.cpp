#include "GameInstance.h"

void Soarks::GameInstance::BeginPlay() { }

void Soarks::GameInstance::Tick(float _deltaTime) { }

void Soarks::GameInstance::Render() { }

void Soarks::GameInstance::EndPlay() { }

Soarks::GameInstance::GameInstance()
	: m_screen{ nullptr }
{
}

Soarks::GameInstance::~GameInstance()
{
	m_screen = nullptr;
}
