#include "BHM_Component.hpp"


BHM_Component::BHM_Component(){
	renderer = nullptr;
	rendererBonds = make_shared<list<shared_ptr<BHM_Component_Queue_Bond>>>();
	includedIn = make_shared<list<BHM_QueueType>>();
}

bool BHM_Component::BHM_SetRenderer(BHM_Renderer * renderer){
	if(this->renderer == nullptr){
		this->renderer = renderer;
		return true;
	} 
	return false;
}

BHM_Renderer* BHM_Component::BHM_GetRenderer(){
	return renderer;
}

bool BHM_Component::BHM_AddBond(weak_ptr<BHM_Component_Queue_Bond> rendererBond){
	this->rendererBonds->push_back(rendererBond.lock());
	return true;
}

void BHM_Component::BHM_StartInitialize(){
    cout << "BHM_Component StartInitialize" << endl;
    if(!initialized){

    	if(this->bondCommand != NULL){
    		cout << "We are here" << endl;
    		delete this->bondCommand;
    		this->bondCommand = NULL;
    	}
    		

        this->BHM_Initialize();
        initialized = true;
    }
}

void BHM_Component::BHM_Initialize(){
	cout << "Initializing component" << endl;
}

BHM_Component::~BHM_Component(){
	cout << "Component destroyed" << endl;
}

void BHM_Component::BHM_DeleteBond(weak_ptr<BHM_Component_Queue_Bond> weakBond){
	/*cout << "My components Before (Size: " << rendererBonds->size() << "): ";;
	for(list<shared_ptr<BHM_Component_Queue_Bond>>::iterator bond = this->rendererBonds->begin(); bond != this->rendererBonds->end(); bond++){
		cout << bond->get()->queueType << " ";
	}
	cout << endl;*/

	for(list<shared_ptr<BHM_Component_Queue_Bond>>::iterator bond = this->rendererBonds->begin(); bond != this->rendererBonds->end(); bond++){
		if(weakBond.lock() == *bond){
			cout << "Destroying bond" << endl;
			bond->reset();
			this->rendererBonds->erase(bond--);
		}
	}
	/*
	cout << "My components Afer (Size: " << rendererBonds->size() << "): ";
	for(list<shared_ptr<BHM_Component_Queue_Bond>>::iterator bond = this->rendererBonds->begin(); bond != this->rendererBonds->end(); bond++){
		cout << bond->get()->queueType << " ";
	}
	cout << endl;*/

}

void BHM_Component::BHM_IncludeBond(BHM_QueueType queueType){
	includedIn->push_back(queueType);
}

void BHM_Component::BHM_AddBondCommand(BHM_Bond_Command* bondCommand){
	if(initialized) return;
	if(this->bondCommand) return;

	this->bondCommand = bondCommand;
}

BHM_Bond_Command* BHM_Component::BHM_GetBondCommand(){
	return this->bondCommand;
}