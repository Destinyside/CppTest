#include<iostream>
#include "BinaryTree.h"
using namespace std;
int main() {
	BinaryTree* b = new BinaryTree;
	BinaryTreeNode* p;
	int val = 0;
	while (true)
	{
		cout << "���������������ֵ��";
		cin >> val;
		if (val == 0) {
			break;
		}
		p = new BinaryTreeNode;
		p->val = val;
		p->count = 1;
		p->left = NULL;
		p->right = NULL;
		b->Insert(p);
	}
	b->pre();
	b->mid();
	b->post();

	delete b;
	system("pause");
}