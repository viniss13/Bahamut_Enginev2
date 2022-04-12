#pragma once
#include "BHM_Common.hpp"
#include "BHM_Entity.hpp"
#include "BHM_Renderer_Set.hpp"
#include "BHM_Renderer.hpp"

class BHM_Runner;


class BHM_Renderer_Manager : public BHM_Entity{
	protected: 
		BHM_Runner* runner;
		shared_ptr<list<shared_ptr<BHM_Renderer_Set>>> rendererSets;

		void BHM_AddRendererSet(shared_ptr<BHM_Renderer_Set> rendererSet);

		void BHM_AddRenderer(shared_ptr<BHM_Renderer> renderer);

	public:
		BHM_Renderer_Manager();

		//void BHM_StartLoop();
	    virtual void BHM_Loop();

	    //void BHM_StartInitialize();
	    virtual void BHM_Initialize();

	    void BHM_SetRunner(BHM_Runner* runner);

	    void BHM_Manage();
};