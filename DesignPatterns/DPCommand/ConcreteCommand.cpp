#include "ConcreteCommand.h"



ConcreteCommand::ConcreteCommand(Receiver* rec):receiver(rec)
{
	std::cout << "����ConcreteCommand" << std::endl;
}


ConcreteCommand::~ConcreteCommand()
{
	delete receiver;
	std::cout << "����ConcreteCommand" << std::endl;
}

void ConcreteCommand::Execute()
{
	std::cout << "ConcreteCommandִ��Execute" << std::endl;
	receiver->Action();
}
