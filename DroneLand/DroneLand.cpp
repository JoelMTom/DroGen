#include "Core/Application.h"


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