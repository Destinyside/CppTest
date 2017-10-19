#include<iostream>
#include<ctime>
using namespace std;

//�κ�һ��Ҷ�ڵ�Ĺؼ��ֲ����ڻ��߲�С�������Һ��ӽڵ�Ĺؼ��֡�

void HeapAdjust(int* &a, int i, int size)  {//������  
	int lchild = 2 * i;       //i�����ӽڵ���� 
	int rchild = 2 * i + 1;     //i���Һ��ӽڵ���� 
	int max = i;            //��ʱ���� 
	if (i <= size / 2)          //���i����Ҷ�ڵ�Ͳ��ý��е��� 
	{
		if (lchild <= size&&a[lchild]>a[max])
		{
			max = lchild;
		}
		if (rchild <= size&&a[rchild]>a[max])
		{
			max = rchild;
		}
		if (max != i)
		{
			swap(a[i], a[max]);
			HeapAdjust(a, max, size);    //�������֮����maxΪ���ڵ���������Ƕ� 
		}
	}
}

void HeapSort(int* &a, int n)
{
	//�Ƚ����󶥶�
	for (int i = n / 2; i >= 0; --i)
	{
		HeapAdjust(a, i, n);
	}
	////��������
	for (int i = n-1; i > 0; --i)
	{
		//���һ��Ԫ�غ͵�һԪ�ؽ��н���
		int temp = a[i];
		a[i] = a[0];
		a[0] = temp;

		//Ȼ��ʣ�µ�����Ԫ�ؼ�������Ϊ�󶥶�
		HeapAdjust(a, 0, i - 1);
	}
}


int* randomArray(int len) {
	//�����������

	srand((unsigned)time(0));
	int* tmp = new int[len] {0};
	for (int i = 0; i < len; i++) {
		tmp[i] = rand() % len;
	}
	return tmp;
}

int main() {
	int len = 10;
	int* arr = randomArray(len); //new int[len] {7,7,0,9,1,7,2,9,9,1};
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	HeapSort(arr, len);
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;
	system("pause");
}