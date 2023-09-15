#pragma once

#include "Core.h"

namespace AwaEngine {
	class AWA_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// to be defined in CLIENT
	Application* CreateApplication();
}