#include "BHM_Config.hpp"

shared_ptr<BHM_Runner> BHM_Config::currentRunner = NULL;
BHM_Standard_GUI * BHM_Config::standardGUI = NULL;
int BHM_Config::SCREEN_WIDTH = 0;
int BHM_Config::SCREEN_HEIGHT = 0;
string BHM_Config::GAME_NAME = "";
int BHM_Config::LAYERS = 1;

void BHM_Config::setCurrentRunner(shared_ptr<BHM_Runner> runner){
	if(currentRunner == NULL){
		cout << "Adding Runner" << endl;
		currentRunner = runner;
	}
}

shared_ptr<BHM_Runner> BHM_Config::getCurrentRunner(){
	return currentRunner;
}