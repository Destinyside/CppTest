#include<iostream>
#include "Component.h"
#include "Composite.h"
#include "Leaf.h"
using namespace std;
int main() {
	///////���ģʽ
	Component* root = new Composite("��");
	Component* c1 = new Composite("һ��ĸ�");
	root->Add(new Leaf("һ���Ҷ��"));
	root->Add(c1);
	c1->Add(new Leaf("�����Ҷ��1"));
	c1->Add(new Leaf("�����Ҷ��2"));
	root->Operation();
	delete root;
	system("pause");
}