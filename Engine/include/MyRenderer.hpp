#pragma once

#include "BHM_Renderer.hpp"
#include "MyComponent.hpp"

class MyRenderer : public BHM_Renderer{
	public:
		int number;
		MyRenderer(int number);
		void BHM_Initialize();
		void BHM_Loop();
};