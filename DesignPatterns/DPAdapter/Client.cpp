#include<iostream>
#include "Target.h"
#include "Adapter.h"
using namespace std;
int main() {
	///////������ģʽ
	///////�������� Adapter�̳�Adaptee
	///////���������� Adapter����Adaptee��Ա����
	Target* p = new Adapter;
	p->Request();
	delete p;
	system("pause");
}