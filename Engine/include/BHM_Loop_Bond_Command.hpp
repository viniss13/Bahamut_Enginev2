#pragma once
#include "BHM_Bond_Command.hpp"
#include "BHM_Component.hpp"
#include "BHM_Renderer.hpp"

class BHM_Loop_Bond_Command : public BHM_Bond_Command{
	public:
		BHM_Loop_Bond_Command(){
			cout << "Loop Command created" << endl;
		}
		~BHM_Loop_Bond_Command(){
			cout << "Loop Command destroyed" << endl;
		}
		void BHM_Execute(BHM_Component* component);

};