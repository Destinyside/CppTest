#include "Adapter.h"


Adapter::Adapter()
{
	std::cout << "����Adapter" << std::endl;
	p = new Adaptee;
}


Adapter::~Adapter()
{
	delete p;
	std::cout << "����Adapter" << std::endl;
}


void Adapter::Request()
{
	std::cout << "����Adapter��Request����" << std::endl;
	p->specificRequest();
}
