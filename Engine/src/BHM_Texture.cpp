#include "BHM_Texture.hpp"


BHM_Texture::BHM_Texture(string path, BHM_Rectangle* rectangle, void* texture){
	this->path = path;
	this->rectangle = rectangle;
	this->texture = texture;
}