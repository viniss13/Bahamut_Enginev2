#pragma once
#include "BHM_Bond_Command.hpp"
#include "BHM_Component.hpp"
#include "BHM_Renderer.hpp"

class BHM_Full_Sprite_Bond_Command : public BHM_Bond_Command{
	protected:
		int layer;
	public:
		void BHM_Execute(BHM_Component* component);
		BHM_Full_Sprite_Bond_Command(int layer);
		~BHM_Full_Sprite_Bond_Command();

};