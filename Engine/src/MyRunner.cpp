#include "MyRunner.hpp"


void MyRunner::BHM_Initialize(){
	cout << "MyRunner Initialize" << endl;
	BHM_SetRendererManager(make_shared<MyRM>());
}


void MyRunner::BHM_Loop(){
}