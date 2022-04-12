#include "BHM_Component_Queue_Bond.hpp"

BHM_Component_Queue_Bond::BHM_Component_Queue_Bond(BHM_Component* component, BHM_Renderer* renderer, BHM_QueueType queueType){
	this->component = component;
	this->renderer = renderer;
	this->queueType = queueType;
}

BHM_Component_Queue_Bond::~BHM_Component_Queue_Bond(){
	cout << "Bond deleted" << endl;
}

BHM_Component* BHM_Component_Queue_Bond::BHM_GetComponent(){
	return this->component;
}