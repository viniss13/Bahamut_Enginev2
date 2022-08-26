#include "BHM_Concrete_Component.hpp"


BHM_Concrete_Component::BHM_Concrete_Component(shared_ptr<BHM_Shape> shape){
	this->shape = shape;
}

weak_ptr<BHM_Shape> BHM_Concrete_Component::BHM_GetShape(){
	return this->shape;
}