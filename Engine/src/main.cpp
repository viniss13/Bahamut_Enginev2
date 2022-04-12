#include "Bahamut.hpp"
#include "MyRunner.hpp"

int main(int argc, char *argv[])
{
	//shared_ptr<BHM_Runner> runner = make_shared<BHM_Runner>();
	//runner->BHM_BeforeInitialize();
    BHM_Init::BHM_Initialize(make_shared<MyRunner>());

    system("pause");
    return 0;
}