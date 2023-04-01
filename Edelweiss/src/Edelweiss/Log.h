#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Edelweiss 
{

	class EDELWEISS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define EW_CORE_TRACE(...) ::Edelweiss::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EW_CORE_INFO(...)  ::Edelweiss::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EW_CORE_WARN(...)  ::Edelweiss::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EW_CORE_ERROR(...) ::Edelweiss::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EW_CORE_FATAL(...) ::Edelweiss::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define EW_TRACE(...) ::Edelweiss::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EW_INFO(...)  ::Edelweiss::Log::GetClientLogger()->info(__VA_ARGS__)
#define EW_WARN(...)  ::Edelweiss::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EW_ERROR(...) ::Edelweiss::Log::GetClientLogger()->error(__VA_ARGS__)
#define EW_FATAL(...) ::Edelweiss::Log::GetClientLogger()->fatal(__VA_ARGS__)