#pragma once

#ifdef AWA_PLATFORM_WINDOWS

extern AwaEngine::Application* AwaEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = AwaEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif