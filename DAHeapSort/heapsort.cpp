#include<iostream>
#include<ctime>
using namespace std;

//�κ�һ��Ҷ�ڵ�Ĺؼ��ֲ����ڻ��߲�С�������Һ��ӽڵ�Ĺؼ��֡�

void HeapAdjust(int* &arr, int start, int end) {
	int tmp = arr[start];
	
	for (int i = 2 * start + 1; i <= end; i *= 2) {
		//��Ϊ������������Ϊ0������1������i������Ӻ��Һ��ӷֱ�Ϊ2i+1��2i+2
		if ((i < end) && (arr[i] <= arr[i + 1])) {//���Һ��ӵıȽ�
			i++;//iΪ�ϴ�ļ�¼���±�
		}
		if (tmp > arr[i]) {//���Һ����л�ʤ���븸�׵ıȽ�
			break;
		}
		//�����ӽ����λ�����Ժ��ӽ���λ�ý�����һ�ֵ�ɸѡ
		arr[start] = arr[i];
		start = i;
	}
	arr[start] = tmp;//�����ʼ����г��Ԫ��
}

void HeapSort(int* &a, int n)
{
	//�Ƚ����󶥶�
	for (int i = n / 2; i >= 0; --i)
	{
		HeapAdjust(a, i, n);
	}
	////��������
	for (int i = n - 1; i > 0; --i)
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
	int* arr = randomArray(len);
	HeapSort(arr, len);
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr;
	system("pause");
}