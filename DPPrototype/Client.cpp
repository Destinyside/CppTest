#include<iostream>
#include "Prtotype.h"
#include "ConcretePrototype.h"
using namespace std;
int main() {
	///////ԭ��ģʽ
	Prototype* p = new ConcretePrototype;
	p->x = 123;
	p->y = 456;
	cout << "ֵ��x " << p->x << " y " << p->y << endl;
	p = p->Clone();
	cout << "ֵ��x " << p->x << " y " << p->y << endl;
	delete p;
	system("pause");
}