#pragma once

#include <memory>

#include "Logger.h"


namespace DroGen
{
	class Log
	{
	public:

		static void Init();

		inline static std::shared_ptr<Hlogger>& GetCoreLogger() { return s_coreLogger; }
		inline static std::shared_ptr<Hlogger>& GetClientLogger() { return s_clientLogger; }

	private:
		static std::shared_ptr<Hlogger> s_coreLogger;
		static std::shared_ptr<Hlogger> s_clientLogger;
	};
}



#define D_CORE_FATAL(...) ::DroGen::Log::GetCoreLogger()->Fatal(__VA_ARGS__)
#define D_CORE_ERROR(...) ::DroGen::Log::GetCoreLogger()->Error(__VA_ARGS__)
#define D_CORE_WARN(...) ::DroGen::Log::GetCoreLogger()->Warn(__VA_ARGS__)
#define D_CORE_DEBUG(...) ::DroGen::Log::GetCoreLogger()->Debug(__VA_ARGS__)
#define D_CORE_INFO(...) ::DroGen::Log::GetCoreLogger()->Info(__VA_ARGS__)
#define D_CORE_TRACE(...) ::DroGen::Log::GetCoreLogger()->Trace(__VA_ARGS__)

#define D_CLIENT_FATAL(...) ::DroGen::Log::GetClientLogger()->Fatal(__VA_ARGS__)
#define D_CLIENT_ERROR(...) ::DroGen::Log::GetClientLogger()->Error(__VA_ARGS__)
#define D_CLIENT_WARN(...) ::DroGen::Log::GetClientLogger()->Warn(__VA_ARGS__)
#define D_CLIENT_DEBUG(...) ::DroGen::Log::GetClientLogger()->Debug(__VA_ARGS__)
#define D_CLIENT_INFO(...) ::DroGen::Log::GetClientLogger()->Info(__VA_ARGS__)
#define D_CLIENT_TRACE(...) ::DroGen::Log::GetClientLogger()->Trace(__VA_ARGS__)