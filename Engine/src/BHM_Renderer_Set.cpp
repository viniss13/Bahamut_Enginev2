#include "BHM_Renderer_Set.hpp"

BHM_Renderer_Set::BHM_Renderer_Set(BHM_Renderer_Manager* rendererManager){
	this->rendererManager = rendererManager;
	renderers = make_shared<list<shared_ptr<BHM_Renderer>>>();
	cout << "RM added on RS" << endl;
}

void BHM_Renderer_Set::BHM_AddRenderer(shared_ptr<BHM_Renderer> renderer){
	renderers->push_back(renderer);
	renderer->BHM_SetRendererSet(this);
}

void BHM_Renderer_Set::BHM_Render(){
	list<shared_ptr<BHM_Renderer>> currentRenderers = *(this->renderers);
	for(auto & renderer : currentRenderers){
		renderer->BHM_StartInitialize();
	}

	for(auto & renderer : currentRenderers){
		renderer->BHM_StartLoop();
	}

	for(auto & renderer : currentRenderers){
		renderer->BHM_InitializeComponents();
	}

	for(auto & renderer : currentRenderers){
		renderer->BHM_LoopComponents();
	}
/*
	for(auto & renderer : currentRenderers){
		renderer->BHM_CheckColliders();
	}

	for(auto & renderer : currentRenderers){
		renderer->BHM_MoveComponents();
	}

	for(auto & renderer : currentRenderers){
		renderer->BHM_DestroyComponents();
	}

	for(auto & renderer : currentRenderers){
		renderer->BHM_RenderSprite();
	}*/
}