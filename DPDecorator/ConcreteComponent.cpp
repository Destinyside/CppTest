#include "ConcreteComponent.h"



ConcreteComponent::ConcreteComponent()
{
	std::cout << "����ConcreteComponent" << std::endl;
}


ConcreteComponent::~ConcreteComponent()
{
	std::cout << "����ConcreteComponent" << std::endl;
}

void ConcreteComponent::Operation()
{
	std::cout << "ConcreteComponent��Operation" << std::endl;
}
