#include "MyRenderer.hpp"

MyRenderer::MyRenderer(int number){
	this->number = number;
}

void MyRenderer::BHM_Initialize(){
	cout << "Initializing my Render " << number << endl;
	this->BHM_AddToQueue(make_shared<MyComponent>());
}
void MyRenderer::BHM_Loop(){
	//cout << "Looping my Render: " << number << endl;
}