#include<iostream>
#include "Abstraction.h"
#include "Implementor.h"
#include "ConcreteImplementor.h"
#include "RefinedAbstraction.h"
using namespace std;
int main() {
	///////�Ž�ģʽ
	Implementor* imp = new ConcreteImplementorB;
	Abstraction* abst = new RefinedAbstraction(imp);
	abst->Operation();
	delete abst;
	system("pause");
}