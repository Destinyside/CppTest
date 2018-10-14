#include<iostream>
#include "ConcreteFactory2.h"
#include "ProductA2.h"
#include "ProductB2.h"


ConcreteFactory2::ConcreteFactory2()
{
	std::cout << "����ConcreteFactory2" << std::endl;
}

ConcreteFactory2::~ConcreteFactory2()
{
	if (pa != NULL) {
		delete pa;
	}
	if (pb != NULL) {
		delete pb;
	}
	std::cout << "����ConcreteFactory2" << std::endl;
}

void ConcreteFactory2::createProductA()
{
	std::cout << "����ConcreteFactory2ϵ�еĲ�ƷA" << std::endl;
	pa = new ProductA2;
}

void ConcreteFactory2::createProductB()
{
	std::cout << "����ConcreteFactory2ϵ�еĲ�ƷB" << std::endl;
	pb = new ProductB2;
}
