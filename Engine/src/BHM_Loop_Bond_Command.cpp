#include "BHM_Loop_Bond_Command.hpp"


void BHM_Loop_Bond_Command::BHM_Execute(BHM_Component* component){
		component->BHM_GetRenderer()->BHM_AddLoopBond(component);
}