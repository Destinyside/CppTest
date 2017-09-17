#include<iostream>
#include "Builder.h"
#include "Director.h"

Director::Director(Builder* bdr)
{
	builder = bdr;
	std::cout << "����Director" << std::endl;
}

Director::~Director()
{
	std::cout << "����Director" << std::endl;
}

void Director::Construct()
{
	builder->buildPartA("����");
	builder->buildPartB("һ��");
	builder->buildPartC("������");
	std::cout << "������ɣ�" << std::endl;
}
