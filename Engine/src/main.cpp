#include "Bahamut.hpp"
#include "MyRunner.hpp"

int main(int argc, char *argv[])
{
	/*
	shared_ptr<list<shared_ptr<int>>> values;
    values = make_shared<list<shared_ptr<int>>>();
    values->push_back(make_shared<int>(1));
    values->push_back(make_shared<int>(2));
    values->push_back(NULL);
    values->push_back(make_shared<int>(3));
    values->push_back(NULL);
    
    auto myFunc = [](shared_ptr<int> val){
        cout << "Printing number: ";
        cout << *val << endl;
    };
    
    cout << "Size before: " << values->size() << endl << endl;
    
    
    
    bhm_utils::for_each(values, myFunc);
    cout << endl << endl;
    cout << "Size before: " << values->size() << endl << endl;
    
    cout << endl << endl;
    
    for(auto first = values->begin(); first != values->end(); first++){
        cout << **first << " ";
    }
    cout << endl << endl;
    cout << "Size before: " << values->size() << endl << endl;*/
    BHM_Config::GAME_NAME = "Teste";
    BHM_Config::SCREEN_HEIGHT = 600;
    BHM_Config::SCREEN_WIDTH = 600;
    BHM_Config::LAYERS = 4;
    BHM_Init::BHM_Initialize(make_shared<MyRunner>());

    system("pause");
    return 0;
}