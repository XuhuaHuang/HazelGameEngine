#pragma once

#include "Core.h"

namespace Hazel {
	
	/**
	 * In SandboxApp.cpp, class SandboxApp inherits this class.
	 */
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void RunApplication();
	};

	/**
	 * Function to be implemented on the client side.
	 * In this case, it is defined in SandboxApp.cpp
	 */
	Application* CreateApplication();
}