#pragma once



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
	};

	Application* CreateApplication();
}