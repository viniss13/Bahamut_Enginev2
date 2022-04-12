#pragma once
#include "BHM_Common.hpp"
#include "BHM_Runner.hpp"
#include "MyRM.hpp"

class MyRunner : public BHM_Runner {
	public:
		void BHM_Initialize();
		void BHM_Loop();
};