#include "BHM_Init.hpp"

void BHM_Init::BHM_Initialize(shared_ptr<BHM_Runner> defaultRunner){
	cout << "Initializing BHM" << endl;
	BHM_Config::setCurrentRunner(defaultRunner);
	defaultRunner = NULL;
	BHM_Config::getCurrentRunner()->BHM_Run();
}