#include<iostream>
#include "Builder.h"
#include "ConcreteBuilder.h"
#include "Director.h"
using namespace std;
int main() {
	///////������ģʽ    ���������������ɲ�ͬ���ֻ�ͬ˳��
	ConcreteBuilder* b = new ConcreteBuilder;
	Director* d = new Director(b);
	d->Construct();
	std::cout << "��������" << b->getResult() << endl;
	delete d;
	delete b;
	system("pause");
}