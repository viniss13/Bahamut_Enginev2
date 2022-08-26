#pragma once
#include "BHM_Common.hpp"

class BHM_Vector2{
	private:
		int x, y;
	public:
		BHM_Vector2(int x, int y);
		int BHM_GetX();
		int BHM_GetY();
};