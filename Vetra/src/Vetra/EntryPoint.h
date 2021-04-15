#pragma once

#ifdef VA_PLATFORM_WINDOWS

extern Vetra::Application* Vetra::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Vetra::CreateApplication();
	app->Run();
	delete app;
}

#endif