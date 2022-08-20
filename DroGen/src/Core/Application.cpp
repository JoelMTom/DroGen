#include "Application.h"
#include "Log.h"

#include <iostream>

namespace DroGen
{
	Application::Application()
	{
		Run();
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