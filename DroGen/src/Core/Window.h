#pragma once

#include <string>
#include <memory>


namespace DroGen
{
	struct WindowProperties
	{
		std::string Title;
		uint32_t Width;
		uint32_t Height;

		WindowProperties(const std::string& title, const uint32_t width, const uint32_t height)
			:Title(title), Width(width), Height(height)
		{

		}
	};


	class Window
	{
	public:

		virtual ~Window() = default;

		virtual void OnUpdate() = 0;

		static std::unique_ptr<Window> Create(const WindowProperties& props = WindowProperties("DroGen", 720, 600));

	};
}