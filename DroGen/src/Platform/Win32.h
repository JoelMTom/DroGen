#pragma once

#include "Core/Window.h"

namespace DroGen
{
	class Win32 : public Window
	{
	public:
		Win32(const WindowProperties& props);
		virtual ~Win32();

		void OnUpdate() override;

		void Init();
		void Shutdown();

	private:

		struct WinData
		{
			std::string Title;
			uint32_t Width;
			uint32_t Height;
		};

		WinData m_Data;
	};
}