#include "BHM_Runner.hpp"
#include <chrono>

void BHM_Runner::BHM_Run(){
	//using namespace std::literals::chrono_literals;

	int i = 0;


	auto start = std::chrono::high_resolution_clock::now();
	while(true){
		i++;
		BHM_Config::standardGUI->BHM_PrepareScene();
		BHM_Config::standardGUI->BHM_PresentScene();
		BHM_StartInitialize();
		BHM_StartLoop();
		if(this->rendererManager != nullptr){
			rendererManager->BHM_Manage();
		} else {
			cout << "Renderer Manager not Found" << endl;
			break;
		}

		if(i == 3700){
			auto end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<float> duration = end - start;
			//cout << duration.count() << endl;
			start = end;
			i = 0;
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

