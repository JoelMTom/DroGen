#include "Application.h"
#include "Log.h"
#include "Window.h"

#include <iostream>
#include <memory>

namespace DroGen
{
	Application::Application()
	{
		m_Window = Window::Create();
	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		while (isRunning)
		{
			Update();
		}
	}

	void Application::Update()
	{

	}
}