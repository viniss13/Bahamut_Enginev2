#pragma once
#include "BHM_Common.hpp"
#include "BHM_Rectangle.hpp"

class BHM_Texture{
	public:
		BHM_Texture(string path, BHM_Rectangle* rectangle, void* texture);
	private:
		BHM_Rectangle* rectangle;
		string path;
		void* texture;
};