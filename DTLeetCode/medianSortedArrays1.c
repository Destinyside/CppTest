#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void quicksort(int* p, int left, int right) {
	if (left > right) {
		return;
	}
	int sign = p[left];
	int i = left;
	int j = right;
	while (i != j) {
		while (sign < p[j] && i < j) {
			j--;
		}
		if (j > i) {
			p[i] = p[j];
		}
		while (sign >= p[i] && i < j) {
			i++;
		}
		if(i < j){
			p[j]= p[i];
		}

	}
	p[i] = sign;
	quicksort(p, left, i - 1);
	quicksort(p, i + 1, right);

}

void printArray(int* nums, int numsSize){
	for(int i=0; i<numsSize; i++){
		printf("%d ", nums[i]);
	}
	printf("\n");
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
	nums1[nums1Size] = *nums2;
	int mergedSize = nums1Size + nums2Size;
	printArray(nums1, mergedSize);
	quicksort(nums1, 0, mergedSize-1);
	printArray(nums1, mergedSize);
	int m1 = mergedSize / 2;
	if(mergedSize % 2 == 0){
		int m2 = m1 - 1;
		return (nums1[m1] + nums1[m2]) / 2.0;
	} else {
		return nums1[m1];
	}
}
int* randomArray(int len) {

	srand((unsigned)time(0));
	int* tmp = malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++) {
		tmp[i] = rand() % len;
	}
	return tmp;
}

int main(){
	int nums1Size = 5;
	int* nums1 = randomArray(nums1Size);
	quicksort(nums1, 0, nums1Size - 1);

	int nums2Size = 6;
	int* nums2 = randomArray(nums2Size);
	quicksort(nums2, 0, nums2Size - 1);

	printf("%f\n",findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size));
	free(nums1);
	free(nums2);
	return 0;

}
