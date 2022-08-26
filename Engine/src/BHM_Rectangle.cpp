#include "BHM_Rectangle.hpp"


BHM_Rectangle::BHM_Rectangle(int width, int height){
	this->width = width;
	this->height = height;
}

int BHM_Rectangle::BHM_GetWidth(){
	return this->width;
}

int BHM_Rectangle::BHM_GetHeight(){
	return this->height;
}

