#pragma once

#ifdef EW_PLATFORM_WINDOWS

extern Edelweiss::Application* Edelweiss::CreateApplication();

int main(int argc, char** argv)
{
	Edelweiss::Log::Init();
	EW_CORE_WARN("Initialized Log");
	int a = 33;
	EW_INFO("Hello client! {0}", a);

	auto app = Edelweiss::CreateApplication();
	app->Run();
	delete app;
}

#endif