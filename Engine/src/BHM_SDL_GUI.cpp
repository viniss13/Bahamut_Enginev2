#include "BHM_SDL_GUI.hpp"

BHM_SDL_GUI::BHM_SDL_GUI(){
	cout << "SDL GUI Initialized" << endl;
	int rendererFlags, windowFlags;

	rendererFlags = SDL_RENDERER_ACCELERATED;
	
	windowFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("Couldn't initialize SDL: %s\n", SDL_GetError());
		exit(1);
	} else {
		cout << "SDL initialized" << endl;
	}

	this->window = SDL_CreateWindow(BHM_Config::GAME_NAME.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, BHM_Config::SCREEN_WIDTH, BHM_Config::SCREEN_HEIGHT, windowFlags);

	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

	this->renderer = SDL_CreateRenderer(this->window, -1, rendererFlags);
	IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);
	
	//SDL_ShowCursor(0);
}

void BHM_SDL_GUI::BHM_PrepareScene(){
	SDL_SetRenderDrawColor(renderer, 32, 32, 32, 255);
	SDL_RenderClear(renderer);
	BHM_DoInput();
}

void BHM_SDL_GUI::BHM_PresentScene()
{
	SDL_RenderPresent(renderer);
}

void BHM_SDL_GUI::BHM_Draw(BHM_Sprite* sprite){
	SDL_Rect dest;

	BHM_Shape* shape = sprite->BHM_GetShape().lock().get();


	BHM_Vector2* vector2 = shape->BHM_GetVector2().lock().get();
	BHM_Rectangle* rectangle = shape->BHM_GetRectangle().lock().get();

	dest.x = vector2->BHM_GetX();
	dest.y = vector2->BHM_GetY();
	dest.w = rectangle->BHM_GetWidth();
	dest.h = rectangle->BHM_GetHeight();

}

void BHM_SDL_GUI::BHM_LoadTexture(string path){

	//this->teste = new unordered_map<string, int>;
	//this->teste->insert(pair<string, int>(path, 5));
	//meuTeste["teste"] = 5;
	//system("pause");
	
	BHM_Texture* myTexture = new BHM_Texture(path, NULL, NULL);
	SDL_Texture* texture = IMG_LoadTexture(renderer, path.c_str());
	
	

	cout << "1 pause" << endl;
	//system("pause");
	if(texture == NULL){
		cout << "Error on loading texture: " << path;
		cout << "2 pause" << endl;
		system("pause");
		return;
	} 
	cout << "3 pause" << endl;
	//system("pause");
	int w = 0;
	int h = 0;

	SDL_QueryTexture(texture, NULL, NULL, &w, &h);
	cout << "4 pause" << endl;
	//system("pause");

	BHM_Rectangle* rectangle = new BHM_Rectangle(w, h);
	cout << "5 pause" << endl;
	//system("pause");
	cout << "6 pause" << endl;
	//system("pause"); 
	//teste = new unordered_map<string, int>;
	//teste->insert(pair<string, int>(path, 5));

	cout << "7 pause" << endl;
	//system("pause");
}

void BHM_SDL_GUI::BHM_DoInput(){
	SDL_Event event;
	
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_QUIT:
				exit(0);
				break;

			case SDL_KEYDOWN: 
				//doKeyDown(&event.key);
				break;

			case SDL_KEYUP:
			//	doKeyUp(&event.key);
				break;

			default:
				break;
		}
	}
}

