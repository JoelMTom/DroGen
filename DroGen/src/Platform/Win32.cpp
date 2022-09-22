#include "Win32.h"
#include "Core/Log.h"
#include "GLFW/glfw3.h"


namespace DroGen
{
	Win32::Win32(const WindowProperties& props)
	{
		Init(props);
	}

	void Win32::Init(const WindowProperties& props)
	{
		m_Data.Title = props.Title;
		m_Data.Width = props.Width;
		m_Data.Height = props.Height;

		D_CORE_INFO("Creating Window {0} {1} {2}", props.Title, props.Width, props.Height);

		glfwInit();
		m_Window = glfwCreateWindow((int)props.Width, (int)props.Height, m_Data.Title.c_str(), nullptr, nullptr);
		glfwSetWindowUserPointer(m_Window, &m_Data);

	}

	


	void Win32::OnUpdate()
	{

	}

	void Win32::Shutdown()
	{
		glfwDestroyWindow(m_Window);
	}

	Win32::~Win32()
	{
		Shutdown();
	}
}