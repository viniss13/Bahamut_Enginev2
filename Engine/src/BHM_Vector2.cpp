#include "BHM_Vector2.hpp"


BHM_Vector2::BHM_Vector2(int x, int y){
	this->x = x;
	this->y = y;
}

int BHM_Vector2::BHM_GetX(){
	return this->x;
}

int BHM_Vector2::BHM_GetY(){
	return this->y;
}