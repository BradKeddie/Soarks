#include "Screen.h"

const int& Soarks::Screen::Width()
{
	return m_width;
}

const int& Soarks::Screen::Height()
{
	return m_height;
}

const string& Soarks::Screen::Title()
{
	return m_title;
}

const Color& Soarks::Screen::ClearColor()
{
	return m_clearColor;
}

void Soarks::Screen::SetWidth(int _newWidth)
{
	m_width = _newWidth;
	SetWindowSize(m_width, m_height);
}

void Soarks::Screen::SetHeight(int _newHeight)
{
	m_height = _newHeight;
	SetWindowSize(m_width, m_height);
}

void Soarks::Screen::SetTitle(const string& _newTitle)
{
	m_title = _newTitle;

	SetWindowTitle(m_title.c_str());
}

void Soarks::Screen::SetCLearColor(Color _newColor)
{
	m_clearColor = _newColor;
}

Soarks::Screen::Screen(Config* _config)
{
	m_width = 720;
	m_height = 480;
	m_title = "Soarks Framework";
	m_clearColor = RAYWHITE;
}

Soarks::Screen::~Screen()
{
	m_width = 0;
	m_height = 0;
	
	m_title = "";
	m_clearColor = {};
}

void Soarks::Screen::Open()
{
	InitWindow(m_width, m_height, m_title.c_str());
	InitAudioDevice();
}

void Soarks::Screen::Close()
{
	CloseAudioDevice();
	CloseWindow();
}

void Soarks::Screen::NewFrame()
{
	BeginDrawing();
	ClearBackground(m_clearColor);
}

void Soarks::Screen::EndFrame()
{
	EndDrawing();
}
