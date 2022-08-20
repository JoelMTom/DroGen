#include "Core/Application.h"
#include "Core/Log.h"


namespace DroGen
{
	class DroneLand : public Application
	{
	public:
		DroneLand()
		{
			D_CLIENT_DEBUG("Hello From DroneLand");
		}
	};

	Application* CreateApplication()
	{
		return new DroneLand;
	}
}