#include "BHM_Config.hpp"

shared_ptr<BHM_Runner> BHM_Config::currentRunner = NULL;

void BHM_Config::setCurrentRunner(shared_ptr<BHM_Runner> runner){
	if(currentRunner == NULL){
		cout << "Adding Runner" << endl;
		currentRunner = runner;
	}
}

shared_ptr<BHM_Runner> BHM_Config::getCurrentRunner(){
	return currentRunner;
}