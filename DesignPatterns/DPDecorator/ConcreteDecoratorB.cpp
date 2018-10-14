#include "ConcreteDecoratorB.h"




ConcreteDecoratorB::ConcreteDecoratorB(DComponent* compo)
{
	comp = compo;
	std::cout << "����ConcreteDecoratorB" << std::endl;
}


ConcreteDecoratorB::~ConcreteDecoratorB()
{
	std::cout << "����ConcreteDecoratorB" << std::endl;
}

void ConcreteDecoratorB::Operation()
{
	std::cout << "ʹ��ConcreteDecoratorB����װ��" << std::endl;
	Decorator::Operation();
	std::cout << "ConcreteDecoratorBװ����Component" << std::endl;
}
