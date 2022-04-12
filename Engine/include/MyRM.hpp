#pragma once

#include "BHM_Renderer_Manager.hpp"
#include "MyRenderer.hpp"

class MyRM : public BHM_Renderer_Manager{
	public:
		void BHM_Initialize();
		void BHM_Loop();
};