#include<iostream>
#include "Facade.h"
using namespace std;
int main() {
	///////���ģʽ
	Facade* f = new Facade;
	f->FunctionA();
	f->FunctionB();
	delete f;
	system("pause");
}