#include "ConcreteCreator.h"
#include "ConcreteProduct.h"
#include<iostream>


ConcreteCreator::ConcreteCreator()
{
	std::cout << "����ConcreteCreator" << std::endl;
}


ConcreteCreator::~ConcreteCreator()
{
	std::cout << "����ConcreteCreator" << std::endl;
}

Product * ConcreteCreator::Create()
{
	return new ConcreteProduct;
}
