#include "BHM_Runner.hpp"

void BHM_Runner::BHM_Run(){
	while(true){
		BHM_StartInitialize();
		BHM_StartLoop();
		if(this->rendererManager != nullptr){
			rendererManager->BHM_Manage();
		} else {
			cout << "Renderer Manager not Found" << endl;
			break;
		}
	}
}


/*void BHM_Runner::BHM_StartInitialize(){
	BHM_Initialize();
}*/

void BHM_Runner::BHM_Initialize(){
	
}

/*void BHM_Runner::BHM_StartLoop(){
	BHM_Loop();
}*/

void BHM_Runner::BHM_Loop(){

}

void BHM_Runner::BHM_SetRendererManager(shared_ptr<BHM_Renderer_Manager> rendererManager)
{
	this->rendererManager = rendererManager;
	this->rendererManager->BHM_SetRunner(this);
}

