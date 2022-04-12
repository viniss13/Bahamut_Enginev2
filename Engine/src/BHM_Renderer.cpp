#include "BHM_Renderer.hpp"

BHM_Renderer::BHM_Renderer(){
	rendererSet = nullptr;
	components = make_shared<list<shared_ptr<BHM_Component>>>();
	initializingComponents = make_shared<list<weak_ptr<BHM_Component_Queue_Bond>>>();
	loopingComponents = make_shared<list<weak_ptr<BHM_Component_Queue_Bond>>>();
}

void BHM_Renderer::BHM_Initialize(){

}

void BHM_Renderer::BHM_Loop(){

}

bool BHM_Renderer::BHM_AddComponent(shared_ptr<BHM_Component> component){
	if(component->BHM_SetRenderer(this)){
		components->push_back(component);
		cout << "Component added" << endl;
		return true;
	}

	return false;
}

bool BHM_Renderer::BHM_AddToQueue(shared_ptr<BHM_Component> component){
	BHM_Renderer* componentRenderer = component->BHM_GetRenderer();

	if(componentRenderer == nullptr){
		this->BHM_AddComponent(component);
		cout << "Setting renderer" << endl;
	} 
	else if (componentRenderer != this) return false;

	shared_ptr<BHM_Component_Queue_Bond> componentQueueBond = make_shared<BHM_Component_Queue_Bond>(component.get(), this, INITIALIZE);
	initializingComponents->push_back(componentQueueBond);
	component->BHM_AddBond(componentQueueBond);
	//component->BHM_IncludeBond(LOOP);
	return true;
}


void BHM_Renderer::BHM_SetRendererSet(BHM_Renderer_Set* rendererSet){
	this->rendererSet = rendererSet;
}

void BHM_Renderer::BHM_InitializeComponents(){
	for(list<weak_ptr<BHM_Component_Queue_Bond>>::iterator componentBond = this->initializingComponents->begin(); componentBond != this->initializingComponents->end(); componentBond++){
		BHM_Component* component = componentBond->lock()->BHM_GetComponent();
		component->BHM_StartInitialize();
		component->BHM_DeleteBond(componentBond->lock());

		//ADDING LOOP BOND
		shared_ptr<BHM_Component_Queue_Bond> componentQueueBond = make_shared<BHM_Component_Queue_Bond>(component, this, LOOP);
		loopingComponents->push_back(componentQueueBond);
		component->BHM_AddBond(componentQueueBond);

		this->initializingComponents->erase(componentBond--); 
	}
}

void BHM_Renderer::BHM_LoopComponents(){
	//cout << "Looping component: " <<  endl;
	//std::cin.get();
	for(list<weak_ptr<BHM_Component_Queue_Bond>>::iterator componentBond = this->loopingComponents->begin(); componentBond != this->loopingComponents->end(); componentBond++){
		componentBond->lock()->BHM_GetComponent()->BHM_StartLoop();
	}
}