#include "ConcreteHandlerB.h"




ConcreteHandlerB::ConcreteHandlerB(Handler* next) :nextHandler(next)
{
	std::cout << "����ConcreteHandlerB" << std::endl;
}


ConcreteHandlerB::~ConcreteHandlerB()
{
	delete nextHandler;
	std::cout << "����ConcreteHandlerB" << std::endl;
}

void ConcreteHandlerB::HandleRequest(int level)
{
	if (level < 100) {
		std::cout << "ConcreteHandlerB���Դ������󣬴����С�����" << std::endl;
	}
	else if (nextHandler == NULL) {
		std::cout << "ConcreteHandlerB�����Դ�������������һ�����ߣ���������" << std::endl;
	}
	else {
		std::cout << "ConcreteHandlerB�����Դ�������ת����һ�������ߡ�" << std::endl;
		nextHandler->HandleRequest(level);
	}
}
