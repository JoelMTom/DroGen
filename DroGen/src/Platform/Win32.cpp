#include "Win32.h"


namespace DroGen
{
	Win32::Win32(const WindowProperties& props)
	{
		m_Data.Title = props.m_Title;
		m_Data.Width = props.m_Width;
		m_Data.Height = props.m_Height;
		Init();
	}

	void Win32::Init()
	{

	}

	void Win32::OnUpdate()
	{

	}

	void Win32::Shutdown()
	{

	}

	Win32::~Win32()
	{
		Shutdown();
	}
}