#include "BHM_Entity.hpp"

int BHM_Entity::lastID = 0;

BHM_Entity::BHM_Entity(){
    ID = lastID++;
    cout << "BHM_Entity Constructor " << ID << endl;
}

void BHM_Entity::BHM_StartInitialize(){
    //cout << "BHM_Entity StartInitialize" << endl;
    if(!initialized){
        this->BHM_Initialize();
        initialized = true;
    }
}   

void BHM_Entity::BHM_StartLoop(){
    //cout << "BHM_Entity StartLoop" << endl;
    this->BHM_Loop();
}

void BHM_Entity::BHM_Initialize(){
    cout << "BHM_Entity Initialize" << endl;
}

void BHM_Entity::BHM_Loop(){
    //cout << "BHM_Entity Loop " << ID << endl;
}

int BHM_Entity::BHM_GetID(){
    return ID;
}

string BHM_Entity::BHM_GetName(){
    return name;
}

bool BHM_Entity::BHM_HasInitialized(){
    return initialized;
}