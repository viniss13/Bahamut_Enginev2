#pragma once
#include "BHM_Common.hpp"
#include "BHM_Entity.hpp"
#include "BHM_Config.hpp"

//class BHM_Renderer_Manager;

#include "BHM_Renderer_Manager.hpp"

class BHM_Runner : public BHM_Entity{
    protected:
        shared_ptr<BHM_Renderer_Manager> rendererManager;
        void BHM_SetRendererManager(shared_ptr<BHM_Renderer_Manager> rendererManager);

    public:
    	void BHM_Run();

        //void BHM_StartLoop();
        virtual void BHM_Loop();

        //void BHM_StartInitialize();
        virtual void BHM_Initialize();
};