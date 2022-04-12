#pragma once
#include "BHM_Common.hpp"
#include "BHM_Renderer.hpp"

class BHM_Renderer_Manager;
//class BHM_Renderer;

class BHM_Renderer_Set {
	private:
		BHM_Renderer_Manager* rendererManager;
		shared_ptr<list<shared_ptr<BHM_Renderer>>> renderers;

	public:
		BHM_Renderer_Set(BHM_Renderer_Manager* rendererManager);
		void BHM_AddRenderer(shared_ptr<BHM_Renderer> renderer);
		void BHM_Render();

};