#include "BHM_Renderer_Manager.hpp"


BHM_Renderer_Manager::BHM_Renderer_Manager(){
	rendererSets = make_shared<list<shared_ptr<BHM_Renderer_Set>>>();
}


/*void BHM_Renderer_Manager::BHM_StartLoop(){

}*/

void BHM_Renderer_Manager::BHM_Loop(){

}


/*void BHM_Renderer_Manager::BHM_StartInitialize(){

}*/

void BHM_Renderer_Manager::BHM_Initialize(){

}

void BHM_Renderer_Manager::BHM_SetRunner(BHM_Runner* runner){
	this->runner = runner;
	cout << "Set Runner" << endl;
}

void BHM_Renderer_Manager::BHM_AddRendererSet(shared_ptr<BHM_Renderer_Set> rendererSet){
	rendererSets->push_back(rendererSet);
	cout << "RS added" << endl;
}

void BHM_Renderer_Manager::BHM_Manage(){
	this->BHM_StartInitialize();
	this->BHM_StartLoop();
	for(auto & set : *rendererSets){
		//cout << endl << "Processing Renderer Set... " << endl;
		set->BHM_Render();
		//cout << endl;
		//system("pause");
	}
}

void BHM_Renderer_Manager::BHM_AddRenderer(shared_ptr<BHM_Renderer> renderer){
	shared_ptr<BHM_Renderer_Set> rendererSet = make_shared<BHM_Renderer_Set>(this);
	rendererSet->BHM_AddRenderer(renderer);
	this->BHM_AddRendererSet(rendererSet);
}
