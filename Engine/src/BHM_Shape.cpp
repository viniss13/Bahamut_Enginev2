#include "BHM_Shape.hpp"

BHM_Shape::BHM_Shape(shared_ptr<BHM_Vector2> vector2, shared_ptr<BHM_Rectangle> rectangle){
	this->vector2 = vector2;
	this->rectangle = rectangle;
}

weak_ptr<BHM_Vector2> BHM_Shape::BHM_GetVector2(){
	return this->vector2;
}

weak_ptr<BHM_Rectangle> BHM_Shape::BHM_GetRectangle(){
	return this->rectangle;
}