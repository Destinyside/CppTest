#include<iostream>
#include "Singleton.h"
using namespace std;
int main() {
	///////����ģʽ
	Singleton* p = Singleton::Instance();
	std::cout << "��������1 ��" << p->getData() << std::endl;
	p = Singleton::Instance();
	std::cout << "��������2 ��" << p->getData() << std::endl;
	system("pause");
}