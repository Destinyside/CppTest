#include "ConcreteHandlerC.h"



ConcreteHandlerC::ConcreteHandlerC(Handler* next) :nextHandler(next)
{
	std::cout << "����ConcreteHandlerC" << std::endl;
}


ConcreteHandlerC::~ConcreteHandlerC()
{
	delete nextHandler;
	std::cout << "����ConcreteHandlerC" << std::endl;
}

void ConcreteHandlerC::HandleRequest(int level)
{
	if (level < 1000) {
		std::cout << "ConcreteHandlerC���Դ������󣬴����С�����" << std::endl;
	}
	else if (nextHandler == NULL) {
		std::cout << "ConcreteHandlerC�����Դ�������������һ�����ߣ���������" << std::endl;
	}
	else {
		std::cout << "ConcreteHandlerC�����Դ�������ת����һ�������ߡ�" << std::endl;
		nextHandler->HandleRequest(level);
	}
}
