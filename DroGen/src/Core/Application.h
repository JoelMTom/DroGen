#pragma once
#include "Window.h"

#include <memory>

namespace DroGen
{
	class Application
	{
	public:
		Application();
		~Application();

		void Run();
		void Update();

	private:
		bool isRunning = true;
		std::unique_ptr<Window> m_Window;
	};

	Application* CreateApplication();
}