#define _CRT_SECURE_NO_WARNINGS 1
//利用冒泡排序进行倒叙排序
#include<stdio.h>
void b_sort(int arr[], int sz) {

	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int k = 0;
		int flage = 0;
		for (k = 0; k < sz - 1 - i; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				int tmp = arr[k];
				arr[k] = arr[k + 1];
				  arr[k + 1] = tmp;
				  flage = 0;
			}
		}
		if (flage == 1) {
			break;
		}
	} 

}
int main() 
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	 b_sort(arr , sz);
	
	return 0;
}