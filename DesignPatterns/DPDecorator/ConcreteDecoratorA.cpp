#include "ConcreteDecoratorA.h"



ConcreteDecoratorA::ConcreteDecoratorA(DComponent* compo)
{
	comp = compo;
	std::cout << "����ConcreteDecoratorA" << std::endl;
}


ConcreteDecoratorA::~ConcreteDecoratorA()
{
	std::cout << "����ConcreteDecoratorA" << std::endl;
}

void ConcreteDecoratorA::Operation()
{
	std::cout << "ʹ��ConcreteDecoratorA����װ��" << std::endl;
	Decorator::Operation();
	std::cout << "ConcreteDecoratorAװ����Component" << std::endl;
}
