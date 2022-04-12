#include "MyRM.hpp"

void MyRM::BHM_Initialize(){
	cout << "Initializing MyRM" << endl;
	//shared_ptr<BHM_Renderer_Set> set = make_shared<BHM_Renderer_Set>(this);

	//set->BHM_AddRenderer(make_shared<MyRenderer>(1));
	//set->BHM_AddRenderer(make_shared<MyRenderer>(2));

	//this->BHM_AddRendererSet(set);

	this->BHM_AddRenderer(make_shared<MyRenderer>(1));
	//this->BHM_AddRenderer(make_shared<MyRenderer>(2));
}

void MyRM::BHM_Loop(){
	//cout << "Looping MyRM" << endl;
}