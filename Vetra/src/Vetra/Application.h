#pragma once

#include "Core.h"

namespace Vetra {

	class VETRA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	Application* CreateApplication();
}

