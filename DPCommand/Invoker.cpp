#include "Invoker.h"



Invoker::Invoker(Command* cmd):command(cmd)
{
	std::cout << "����Invoker" << std::endl;
}


Invoker::~Invoker()
{
	delete command;
	std::cout << "����Invoker" << std::endl;
}

void Invoker::Execute()
{
	std::cout << "Invokerִ��Execute" << std::endl;
	command->Execute();
}