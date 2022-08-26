#pragma once
#include "BHM_Common.hpp"
#include "BHM_Concrete_Component.hpp"

class BHM_Sprite : virtual public BHM_Concrete_Component{
	public:
		BHM_Sprite(shared_ptr<BHM_Shape> shape);
};