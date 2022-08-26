#pragma once
#include "BHM_Common.hpp"

#include "BHM_Entity.hpp"

#include "BHM_Component.hpp"

#include "BHM_Component_Queue_Bond.hpp"

#include "BHM_Sprite.hpp"

#include "BHM_Config.hpp"

#include "BHM_Loop_Bond_Command.hpp"

#include "BHM_Full_Sprite_Bond_Command.hpp"

class BHM_Renderer_Set;
//class BHM_Component_Queue_Bond;

class BHM_Renderer : public BHM_Entity{
	protected:

		BHM_Renderer_Set* rendererSet;
		shared_ptr<list<shared_ptr<BHM_Component>>> components;
		shared_ptr<list<weak_ptr<BHM_Component_Queue_Bond>>>* sprites;
		shared_ptr<list<weak_ptr<BHM_Component_Queue_Bond>>> initializingComponents;
		shared_ptr<list<weak_ptr<BHM_Component_Queue_Bond>>> loopingComponents;
		bool BHM_AddToQueue(shared_ptr<BHM_Component> component);


	public:
		BHM_Renderer();

	    virtual void BHM_Loop();
	    virtual void BHM_Initialize();

	    bool BHM_AddComponent(shared_ptr<BHM_Component> component);

	    void BHM_SetRendererSet(BHM_Renderer_Set* rendererSet);

	    bool BHM_AddComponentToQueue(shared_ptr<BHM_Component> component);

	    bool BHM_AddFullSpriteToQueue(shared_ptr<BHM_Sprite> sprite, int layer);

	    bool BHM_AddSpriteToQueue(shared_ptr<BHM_Sprite> sprite);

	    void BHM_InitializeComponents();

	    void BHM_LoopComponents();

	    void BHM_RenderSprites(int layer);

	    void BHM_AddLoopBond(BHM_Component* component);

	    void BHM_AddSpriteBond(BHM_Sprite* sprite, int layer);

	    void BHM_AddFullSpriteBond(BHM_Sprite* sprite, int layer);

};