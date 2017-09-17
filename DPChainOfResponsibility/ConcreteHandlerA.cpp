#include "ConcreteHandlerA.h"


ConcreteHandlerA::ConcreteHandlerA(Handler* next):nextHandler(next)
{
	std::cout << "����ConcreteHandlerA" << std::endl;
}


ConcreteHandlerA::~ConcreteHandlerA()
{
	delete nextHandler;
	std::cout << "����ConcreteHandlerA" << std::endl;
}

void ConcreteHandlerA::HandleRequest(int level)
{
	std::cout << "�������󣬵ȼ� �� " << level << std::endl;
	if (level < 10) {
		std::cout << "ConcreteHandlerA���Դ������󣬴����С�����" << std::endl;
	}
	else if (nextHandler == NULL) {
		std::cout << "ConcreteHandlerA�����Դ�������������һ�����ߣ���������" << std::endl;
	}
	else {
		std::cout << "ConcreteHandlerA�����Դ�������ת����һ�������ߡ�" << std::endl;
		nextHandler->HandleRequest(level);
	}
}
