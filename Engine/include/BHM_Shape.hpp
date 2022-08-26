#pragma once
#include "BHM_Common.hpp"
#include "BHM_Vector2.hpp"
#include "BHM_Rectangle.hpp"

class BHM_Shape{
public:
	BHM_Shape(shared_ptr<BHM_Vector2> vector2, shared_ptr<BHM_Rectangle> rectangle);
	weak_ptr<BHM_Vector2> BHM_GetVector2();
	weak_ptr<BHM_Rectangle> BHM_GetRectangle();
private:
	shared_ptr<BHM_Vector2> vector2;
	shared_ptr<BHM_Rectangle> rectangle;
};