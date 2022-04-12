#pragma once
#include "BHM_Common.hpp"

class BHM_Runner;

class BHM_Config {
	private:
		static shared_ptr<BHM_Runner> currentRunner;		

	public:
		static void setCurrentRunner(shared_ptr<BHM_Runner> runner);
		static shared_ptr<BHM_Runner> getCurrentRunner();
};