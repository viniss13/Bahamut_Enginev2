#include "MyRenderer.hpp"

MyRenderer::MyRenderer(int number){
	this->number = number;
}

void MyRenderer::BHM_Initialize(){
	BHM_Config::standardGUI->BHM_LoadTexture("res/gfx/field.png");

	cout << "Initializing my Render " << number << endl;
	this->BHM_AddComponentToQueue(make_shared<MyComponent>());


	shared_ptr<BHM_Vector2> vec2 = make_shared<BHM_Vector2>(10, 15);
	shared_ptr<BHM_Rectangle> rect = make_shared<BHM_Rectangle>(10, 15);
	shared_ptr<BHM_Shape> shape = make_shared<BHM_Shape>(vec2, rect);
	shared_ptr<BHM_Sprite> spr = make_shared<BHM_Sprite>(shape);

	shared_ptr<BHM_Sprite> spr1 = make_shared<BHM_Sprite>(shape);

	this->BHM_AddFullSpriteToQueue(spr, 1);
	this->BHM_AddFullSpriteToQueue(spr1, 1);
}
void MyRenderer::BHM_Loop(){
	//cout << "Looping my Render: " << number << endl;
}