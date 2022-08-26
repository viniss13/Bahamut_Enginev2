#pragma once
#include "BHM_Common.hpp"

class BHM_Entity{
    protected:
        bool initialized = false;
        static int lastID;
        string name;
        int ID;
    public:
        BHM_Entity();
        
        virtual void BHM_StartInitialize();
        virtual void BHM_StartLoop();
        
        virtual void BHM_Initialize();
        virtual void BHM_Loop();
        int BHM_GetID();
        bool BHM_HasInitialized();
        string BHM_GetName();
};