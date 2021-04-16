#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Vetra {
	class VETRA_API Log
	{
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//core log macros
#define VA_CORE_TRACE(...) ::Vetra::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define VA_CORE_INFO(...)  ::Vetra::Log::GetCoreLogger()->info(__VA_ARGS__)
#define VA_CORE_WARN(...)  ::Vetra::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define VA_CORE_ERROR(...) ::Vetra::Log::GetCoreLogger()->error(__VA_ARGS__)
#define VA_CORE_FATAL(...) ::Vetra::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//client log macros
#define VA_TRACE(...)      ::Vetra::Log::GetClientLogger()->trace(__VA_ARGS__)
#define VA_INFO(...)       ::Vetra::Log::GetClientLogger()->info(__VA_ARGS__)
#define VA_WARN(...)       ::Vetra::Log::GetClientLogger()->warn(__VA_ARGS__)
#define VA_ERROR(...)      ::Vetra::Log::GetClientLogger()->error(__VA_ARGS__)
#define VA_FATAL(...)      ::Vetra::Log::GetClientLogger()->fatal(__VA_ARGS__)