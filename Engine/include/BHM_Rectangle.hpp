#pragma once
#include "BHM_Common.hpp"

class BHM_Rectangle{
	private:
		int width, height;
	public:
		BHM_Rectangle(int width, int height);
		int BHM_GetWidth();
		int BHM_GetHeight();
};