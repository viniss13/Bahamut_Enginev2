#pragma once
#include "Bahamut.hpp"

class MyComponent : public BHM_Component{
	public:
		void BHM_Initialize();
		void BHM_Loop();
};