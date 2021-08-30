#pragma once

#ifdef HZ_PLATFORM_WINDOWS

/* Function to be implemented on the client side */
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hazel engine is starting...\n");
	auto app = Hazel::CreateApplication();
	app->RunApplication();
	delete app;

	return 0;
}

#endif