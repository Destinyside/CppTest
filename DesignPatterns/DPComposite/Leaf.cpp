#include "Leaf.h"
#include<iostream>


Leaf::Leaf(char* name)
{
	lname = name;
	std::cout << "����Composite �� " << name << std::endl;
}


Leaf::~Leaf()
{
	std::cout << "����Composite �� " << lname << std::endl;
}

void Leaf::Operation()
{
	std::cout << "Leaf �� " << lname << " ��Operation" << std::endl;
}
