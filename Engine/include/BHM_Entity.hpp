#pragma once
#include "BHM_Common.hpp"

class BHM_Entity{
    protected:
        bool initialized = false;
    public:
        BHM_Entity();
        static int lastID;
        int ID;
        string name;
        
         
        
        virtual void BHM_StartInitialize();
        virtual void BHM_StartLoop();
        
        virtual void BHM_Initialize();
        virtual void BHM_Loop();
};