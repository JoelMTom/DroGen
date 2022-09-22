#include "Core/Application.h"
#include "Core/Log.h"

extern DroGen::Application* DroGen::CreateApplication();

int main()
{
	DroGen::Log::Init();
	auto app = DroGen::CreateApplication();
	app->Run();
}