#pragma once
#include "BHM_Common.hpp"
#include "BHM_Shape.hpp"
#include "BHM_Component.hpp"

class BHM_Concrete_Component : public BHM_Component{
	protected:
		shared_ptr<BHM_Shape> shape;
	public:
		BHM_Concrete_Component(shared_ptr<BHM_Shape> shape);
		weak_ptr<BHM_Shape> BHM_GetShape();
};