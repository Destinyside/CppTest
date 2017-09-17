#include "ConcretePrototype.h"
#include<iostream>


ConcretePrototype::ConcretePrototype()
{
	std::cout << "����ConcretePrototype" << std::endl;
}


ConcretePrototype::~ConcretePrototype()
{
	std::cout << "����ConcretePrototype" << std::endl;
}

Prototype * ConcretePrototype::Clone()
{
	std::cout << "��¡ConcretePrototype" << std::endl;
	Prototype* p = new ConcretePrototype;
	p->x = this->x;
	p->y = this->y;
	return p;
}
