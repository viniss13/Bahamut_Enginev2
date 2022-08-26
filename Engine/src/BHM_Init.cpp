#include "BHM_Init.hpp"

void BHM_Init::BHM_Initialize(shared_ptr<BHM_Runner> defaultRunner){
	cout << "Initializing BHM" << endl;
	if(BHM_Config::standardGUI == NULL){
		BHM_Config::standardGUI = new BHM_SDL_GUI();
	}
	BHM_Config::setCurrentRunner(defaultRunner);
	defaultRunner = NULL;
	BHM_Config::getCurrentRunner()->BHM_Run();
}