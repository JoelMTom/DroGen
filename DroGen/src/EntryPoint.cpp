#include "Core/Application.h"
#include "Core/Log.h"

extern DroGen::Application* DroGen::CreateApplication();

int main()
{
	DroGen::Log::Init();
	D_CLIENT_TRACE("Sharukh");
	auto app = DroGen::CreateApplication();
	app->Run();
}