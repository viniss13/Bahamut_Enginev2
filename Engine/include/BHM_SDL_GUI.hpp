#pragma once
#include "BHM_Common.hpp"
#include "BHM_Standard_GUI.hpp"
#include "BHM_Config.hpp"
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

class BHM_SDL_GUI : public BHM_Standard_GUI{
public: 
	BHM_SDL_GUI();
	void BHM_PrepareScene();
	void BHM_PresentScene();
	void BHM_Draw(BHM_Sprite* sprite);
	void BHM_LoadTexture(string path);
	void BHM_DoInput();
	
private:
	SDL_Window *window;
	SDL_Renderer *renderer;
};