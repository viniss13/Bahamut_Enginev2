#pragma once
#include "BHM_Common.hpp"
#include "BHM_Standard_GUI.hpp"

class BHM_Runner;

class BHM_Config {
	private:
		static shared_ptr<BHM_Runner> currentRunner; 		

	public:
		static void setCurrentRunner(shared_ptr<BHM_Runner> runner);
		static shared_ptr<BHM_Runner> getCurrentRunner();
		static BHM_Standard_GUI * standardGUI;
		static int SCREEN_WIDTH;
		static int SCREEN_HEIGHT;
		static string GAME_NAME;
		static int LAYERS;
};