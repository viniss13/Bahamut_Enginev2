#include "MyRunner.hpp"


void MyRunner::BHM_Initialize(){
	cout << "MyRunner Initialize" << endl;
	setRendererManager(make_shared<MyRM>());
}


void MyRunner::BHM_Loop(){
}