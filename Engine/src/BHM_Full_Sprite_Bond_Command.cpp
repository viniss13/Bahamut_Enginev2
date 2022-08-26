#include "BHM_Full_Sprite_Bond_Command.hpp"


BHM_Full_Sprite_Bond_Command::BHM_Full_Sprite_Bond_Command(int layer){
	cout << "Full Sprite Command created" << endl;
	this->layer = layer;
}

void BHM_Full_Sprite_Bond_Command::BHM_Execute(BHM_Component* component){
	BHM_Concrete_Component* conComp = (BHM_Concrete_Component*) component;
	BHM_Sprite* spr = dynamic_cast<BHM_Sprite*>(conComp);
	component->BHM_GetRenderer()->BHM_AddFullSpriteBond(spr, this->layer);
}


BHM_Full_Sprite_Bond_Command::~BHM_Full_Sprite_Bond_Command(){
	cout << "Full Sprite Command destroyed" << endl;
}