#include "Window.h"
#include "Platform/Win32.h"


namespace DroGen
{
	std::unique_ptr<Window> Window::Create(const WindowProperties& props)
	{
		return std::make_unique<Win32>(props);
	}
}	