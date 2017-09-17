#include<iostream>
#include "ConcreteBuilder.h"


ConcreteBuilder::ConcreteBuilder()
{
	product = (char*)calloc(20, sizeof(char));
	std::cout << "����ConcreteBuilder" << std::endl;
}

ConcreteBuilder::~ConcreteBuilder()
{
	delete product;
	std::cout << "����ConcreteBuilder" << std::endl;
}

void ConcreteBuilder::buildPartA(char* a)
{
	int len = strlen(a);
	strcat_s(product, strlen(a) + strlen(product) + 1, a);
	std::cout << "����A���֣�" << a << std::endl;
}
void ConcreteBuilder::buildPartB(char* b)
{
	strcat_s(product, strlen(b) + strlen(product) + 1, b);
	std::cout << "����B���֣�" << b << std::endl;
}
void ConcreteBuilder::buildPartC(char* c)
{
	strcat_s(product, strlen(c) + strlen(product) + 1, c);
	std::cout << "����C���֣�" << c << std::endl;
}

char * ConcreteBuilder::getResult()
{
	return product;
}

