#pragma once

#include <string>
#include <memory>


namespace DroGen
{
	struct WindowProperties
	{
		std::string m_Title;
		uint32_t m_Width;
		uint32_t m_Height;

		WindowProperties(const std::string& title, const uint32_t width, const uint32_t height)
			:m_Title(title), m_Width(width), m_Height(height)
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