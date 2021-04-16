#pragma once

#ifdef VA_PLATFORM_WINDOWS

extern Vetra::Application* Vetra::CreateApplication();

int main(int argc, char** argv)
{
	Vetra::Log::init();
	VA_CORE_WARN("Initialized Log!");
	int a = 5;
	VA_INFO("Hello! var={0}", a);

	auto app = Vetra::CreateApplication();
	app->Run();
	delete app;
}

#endif