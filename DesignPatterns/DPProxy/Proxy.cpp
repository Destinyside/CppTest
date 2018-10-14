#include "Proxy.h"


Proxy::Proxy(PSubject* sub)
{
	rs = sub;
	std::cout << "����Proxy" << std::endl;
}


Proxy::~Proxy()
{
	delete rs;
	std::cout << "����Proxy" << std::endl;
}

void Proxy::Request()
{
	before();
	std::cout << "Proxy��RealRequest����" << std::endl;
	rs->Request();
	after();
}

void Proxy::before()
{
	std::cout << "Proxyִ��before" << std::endl;
}

void Proxy::after()
{
	std::cout << "Proxyִ��after" << std::endl;
}
