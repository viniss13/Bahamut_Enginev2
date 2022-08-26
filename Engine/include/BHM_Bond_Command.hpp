#pragma once
#include "BHM_Common.hpp"


class BHM_Component;

class BHM_Bond_Command{
	public:
		virtual ~BHM_Bond_Command(){
			cout << "Deleting command" << endl;
 		}
		virtual void BHM_Execute(BHM_Component* component) = 0;
};