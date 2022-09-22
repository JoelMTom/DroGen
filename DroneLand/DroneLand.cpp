#include "Core/Application.h"
#include "Core/Log.h"


namespace DroGen
{
	class DroneLand : public Application
	{
	public:
		DroneLand()
		{
			/*D_CLIENT_DEBUG("Hello From DroneLand");
			D_CORE_FATAL("Fatal Error Log");
			D_CORE_ERROR("Error Log");
			D_CORE_WARN("Warn Log");
			D_CORE_INFO("Info Log");*/
		}
	};

	Application* CreateApplication()
	{
		return new DroneLand;
	}
}