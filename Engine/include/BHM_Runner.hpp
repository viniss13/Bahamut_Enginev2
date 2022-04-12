#pragma once
#include "BHM_Common.hpp"
#include "BHM_Entity.hpp"

//class BHM_Renderer_Manager;

#include "BHM_Renderer_Manager.hpp"

class BHM_Runner : public BHM_Entity{
    protected:
        shared_ptr<BHM_Renderer_Manager> rendererManager;
        void setRendererManager(shared_ptr<BHM_Renderer_Manager> rendererManager);

    public:
    	void BHM_Run();

        //void BHM_StartLoop();
        virtual void BHM_Loop();

        //void BHM_StartInitialize();
        virtual void BHM_Initialize();
};