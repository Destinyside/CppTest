#include<iostream>
#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"

ConcreteFactory1::ConcreteFactory1()
{
	std::cout << "����ConcreteFactory1" << std::endl;
}

ConcreteFactory1::~ConcreteFactory1()
{
	if (pa != NULL) {
		delete pa;
	}
	if (pb != NULL) {
		delete pb;
	}
	std::cout << "����ConcreteFactory1" << std::endl;
}

void ConcreteFactory1::createProductA()
{
	std::cout << "����ConcreteFactory1ϵ�еĲ�ƷA" << std::endl;
	pa = new ProductA1;
}

void ConcreteFactory1::createProductB()
{
	std::cout << "����ConcreteFactory1ϵ�еĲ�ƷB" << std::endl;
	pb = new ProductB1;
}
