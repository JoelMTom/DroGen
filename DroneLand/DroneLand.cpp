#include "Core/Application.h"
#include "Core/Log.h"


namespace DroGen
{
	class DroneLand : public Application
	{
		
	};

	Application* CreateApplication()
	{
		return new DroneLand;
	}
}