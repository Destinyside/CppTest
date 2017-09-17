#include<iostream>
using namespace std;

enum Color{Red,Black};

class RBTreeNode {
public:
	Color color;
	int data;
	RBTreeNode* parent;
	RBTreeNode* left;
	RBTreeNode* right;
	RBTreeNode(int value):color(Red),data(value),parent(NULL),left(NULL),right(NULL){}
};

class RBTree {

	/*
	ÿ���ڵ�Ҫô�Ǻ�ģ�Ҫô�Ǻڵġ�
	���ڵ��Ǻڵġ�
	ÿ��Ҷ�ڵ㣨Ҷ�ڵ㼴ָ��β��NILָ���NULL�ڵ㣩�Ǻڵġ�
	���һ���ڵ��Ǻ�ģ���ô�����������Ӷ��Ǻڵġ�
	������һ�ڵ���ԣ��䵽Ҷ�ڵ���β��NILָ���ÿһ��·����������ͬ��Ŀ�ĺڽڵ㡣
	*/

public:
	RBTreeNode* head;
	RBTree() {

	}
	RBTreeNode* getParent(RBTreeNode* node) {
		return node->parent;
	}

	RBTreeNode* getUncle(RBTreeNode* node) {
		if (node->parent == getGrandParent(node)->left) {
			return getGrandParent(node)->right;
		}
		else {
			return getGrandParent(node)->left;
		}
	}

	RBTreeNode* getGrandParent(RBTreeNode* node) {
		return node->parent->parent;
	}

	void insertNode(RBTreeNode* &root, int value) {
		RBTreeNode* node = new RBTreeNode(value);
		if (root == NULL) {
			root = node;
			head = root;
		}
		else {
			RBTreeNode* tmp = root;
			while (tmp) {
				if (node->data > tmp->data) {
					if (tmp->right == NULL) {
						tmp->right = node;
						node->parent = tmp;
						break;
					}
					else {
						tmp = tmp->right;
					}
				}
				else if (node->data == tmp->data) {
					//insertCase(tmp);
				}
				else {
					if (tmp->left == NULL) {
						tmp->left = node;
						node->parent = tmp;
						break;
					}
					else {
						tmp = tmp->left;
					}
				}
			}
		}
		insertCase(node);
		root = head;
		root->color = Black;
	}

	void leftRotate(RBTreeNode* &node) {
		if (node != NULL) {
			RBTreeNode* rc = node->right;
			RBTreeNode* parent = node->parent;

			node->right = rc->left;
			if (rc->left != NULL) {
				rc->left->parent = node;
			}

			rc->left = node;
			node->parent = rc;

			if (parent == NULL) {
				head = rc;
				parent = head;
			}
			else if (node == parent->left) {
				parent->left = rc;
				rc->parent = parent;
			}
			else {
				parent->right = rc;
				rc->parent = parent;
			}
		}
	}

	void rightRotate(RBTreeNode* &node) {
		if (node != NULL) {
			RBTreeNode* lc = node->left;
			RBTreeNode* parent = node->parent;

			node->left = lc->right;
			if (lc->right != NULL) {
				lc->right->parent = node;
			}

			lc->right = node;
			node->parent = lc;

			if (parent == NULL) {
				head = lc;
				parent = head;
			}
			else if (node == parent->left) {
				parent->left = lc;
				lc->parent = parent;
			}
			else {
				parent->right = lc;
				lc->parent = parent;
			}
		}
	}

	void insertCase(RBTreeNode* &node){

		//�Ե������޸���ɫ

		while ((node != NULL) && (node->parent != NULL) && (node->parent->color == Red)) {
			cout << node->data << " ";
			if (node->parent == getGrandParent(node)->left) {
				if (getUncle(node) != NULL&&getUncle(node)->color == Red) {
					//�츸���壬���ø���Ϊ��ɫ�������游Ϊ��ɫ
					node->parent->color = Black;
					getUncle(node)->color = Black;
					getGrandParent(node)->color = Red;
					node = getGrandParent(node);
				}
				else {//�츸����
					if (node == node->parent->right) {
						//node�ڵ�Ϊ���ӽڵ�
						node = node->parent;
						leftRotate(node);
					}
					node->parent->color = Black;
					getGrandParent(node)->color = Red;
					rightRotate(node->parent->parent);
				}
			}
			else {
				//�Գ�
				if (getUncle(node) != NULL&&getUncle(node)->color == Red) {
					//�츸���壬���ø���Ϊ��ɫ�������游Ϊ��ɫ
					node->parent->color = Black;
					getUncle(node)->color = Black;
					getGrandParent(node)->color = Red;
					node = getGrandParent(node);
				}
				else {//�츸����
					if (node == node->parent->left) {
						//node�ڵ�Ϊ���ӽڵ�
						node = node->parent;
						rightRotate(node);
					}
					node->parent->color = Black;
					getGrandParent(node)->color = Red;
					leftRotate(node->parent->parent);
				}
			}
		}
	}
	void deleteNode(RBTreeNode* root, int key) {

	}
	void deleteAll(RBTreeNode* node) {
		if (node != NULL) {
			deleteAll(node->left);
			deleteAll(node->right);
			delete node;
		}
	}
	void printTree(RBTreeNode* node) {
		if (node != NULL) {
			cout << node->data << " ";
			cout << node->color << endl;
			if (node->left != NULL) {
				cout << " left child : " << node->left->data << endl;
			}
			if (node->right != NULL) {
				cout << "right child : " << node->right->data << endl;
			}
			printTree(node->left);
			printTree(node->right);
		}
	}
	void prePrint(RBTreeNode* node) {
		if (node != NULL) {
			cout << node->data << " ";
			prePrint(node->left);
			prePrint(node->right);
		}
	}
	void midPrint(RBTreeNode* node) {
		if (node != NULL) {
			midPrint(node->left);
			cout << node->data << " ";
			midPrint(node->right);
		}
	}
	void postPrint(RBTreeNode* node) {
		if (node != NULL) {
			postPrint(node->left);
			postPrint(node->right);
			cout << node->data << " ";
		}
	}
};
int main() {
	/*
== ԭʼ����: 10 40 30 60 90 70 20 50 80 
== ǰ�����: 30 10 20 60 40 50 80 70 90 
== �������: 10 20 30 40 50 60 70 80 90 
== �������: 20 10 50 40 70 90 80 60 30 
== ��Сֵ: 10
== ���ֵ: 90
== ������ϸ��Ϣ: 
30(B) is root
10(B) is 30's   left child
20(R) is 10's  right child
60(R) is 30's  right child
40(B) is 60's   left child
50(R) is 40's  right child
80(B) is 60's  right child
70(R) is 80's   left child
90(R) is 80's  right child
	*/
	RBTree* tree = new RBTree;
	RBTreeNode* root = NULL;
	tree->insertNode(root, 10);
	tree->insertNode(root, 40);
	tree->insertNode(root, 30);
	tree->insertNode(root, 60);
	tree->insertNode(root, 90);
	tree->insertNode(root, 70);
	tree->insertNode(root, 20);
	tree->insertNode(root, 50);
	tree->insertNode(root, 80);
	tree->printTree(root);
	cout << endl;
	tree->prePrint(root);
	cout << endl;
	tree->midPrint(root);
	cout << endl;
	tree->postPrint(root);
	tree->deleteAll(root);
	delete tree;
	system("pause");
}