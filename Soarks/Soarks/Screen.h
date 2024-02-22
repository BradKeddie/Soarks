#pragma once

#include "Screen.h"

#include <raylib/raylib.h>
#include <string>

using std::string;

namespace Soarks
{
	class Config;

	class Screen
	{
		friend class Application;

	public:
		const int& Width();
		const int& Height();
		const string& Title();
		const Color& ClearColor();

		void SetWidth(int _newWidth);
		void SetHeight(int _newHeight);
		void SetTitle(const string& _newTitle);
		void SetCLearColor(Color _newColor);

	private:
		int m_width;
		int m_height;
		string m_title;
		Color m_clearColor;

	private:
		Screen(Config* _config);
		~Screen();

	private:
		void Open();
		void Close();

		void NewFrame();
		void EndFrame();
	};
}

