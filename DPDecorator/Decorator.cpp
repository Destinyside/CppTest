#include "Decorator.h"



Decorator::Decorator()
{
	std::cout << "����Decorator" << std::endl;
}


Decorator::~Decorator()
{
	delete comp;
	std::cout << "����Decorator" << std::endl;
}

void Decorator::Operation()
{
	std::cout << "Decoratorִ��Component��Operation" << std::endl;
	comp->Operation();
}
