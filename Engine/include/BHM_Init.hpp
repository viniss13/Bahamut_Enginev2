#pragma once
#include "BHM_Common.hpp"
#include "BHM_Config.hpp"
#include "BHM_Runner.hpp"
#include "BHM_SDL_GUI.hpp"

class BHM_Runner;

class BHM_Init{
	public:
		static void BHM_Initialize(shared_ptr<BHM_Runner> defaultRunner);
};