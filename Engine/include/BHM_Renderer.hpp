#pragma once
#include "BHM_Common.hpp"

#include "BHM_Entity.hpp"

#include "BHM_Component.hpp"

#include "BHM_Component_Queue_Bond.hpp"

class BHM_Renderer_Set;
//class BHM_Component_Queue_Bond;

class BHM_Renderer : public BHM_Entity{
	protected:

		BHM_Renderer_Set* rendererSet;
		shared_ptr<list<shared_ptr<BHM_Component>>> components;
		shared_ptr<list<weak_ptr<BHM_Component_Queue_Bond>>> initializingComponents;
		shared_ptr<list<weak_ptr<BHM_Component_Queue_Bond>>> loopingComponents;

	public:
		BHM_Renderer();

	    virtual void BHM_Loop();
	    virtual void BHM_Initialize();

	    bool BHM_AddComponent(shared_ptr<BHM_Component> component);

	    void BHM_SetRendererSet(BHM_Renderer_Set* rendererSet);

	    bool BHM_AddToQueue(shared_ptr<BHM_Component> component);

	    void BHM_InitializeComponents();

	    void BHM_LoopComponents();

};