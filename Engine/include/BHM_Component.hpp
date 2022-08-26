#pragma once
#include "BHM_Common.hpp"
#include "BHM_Entity.hpp"
#include "BHM_Bond_Command.hpp"
#include "BHM_Component_Queue_Bond.hpp"

class BHM_Renderer;
class BHM_Bond_Command;

class BHM_Component : public BHM_Entity{
	protected:
		BHM_Renderer* renderer;
		shared_ptr<list<shared_ptr<BHM_Component_Queue_Bond>>> rendererBonds;
		shared_ptr<list<BHM_QueueType>> includedIn;
		BHM_Bond_Command* bondCommand;
		
	public:
		BHM_Component();
		~BHM_Component();
		bool BHM_SetRenderer(BHM_Renderer * renderer);
		BHM_Renderer* BHM_GetRenderer();
		bool BHM_AddBond(weak_ptr<BHM_Component_Queue_Bond> rendererBond);
		void BHM_DeleteBond(weak_ptr<BHM_Component_Queue_Bond> weakBond);
		void BHM_IncludeBond(BHM_QueueType queueType);

		void BHM_AddBondCommand(BHM_Bond_Command* bondCommand);
		BHM_Bond_Command* BHM_GetBondCommand();
		void BHM_StartInitialize();
		void BHM_Initialize();
};