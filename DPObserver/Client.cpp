#include<iostream>
#include "Observer.h"
#include "PublicNumber.h"
#include "Subject.h"
#include "User.h"
using namespace std;
int main() {
	///////�۲���ģʽ
	Observer* o1 = new User("����");
	Observer* o2 = new User("����");
	Observer* o3 = new User("����");
	Observer* o4 = new User("����");
	Subject* pn = new PublicNumber("���»�");
	pn->AddObserver(o1);
	pn->AddObserver(o2);
	pn->AddObserver(o3);
	pn->AddObserver(o4);
	pn->Notify("��ǰ��һ��ǿ��֢��������");
	delete pn;
	system("pause");
}