#define _CRT_SECURE_NO_WARNINGS 1
//利用函数进行二分查找
//一共有10个数组，要求 求出7所在的下标，如果能找到及打印，找不到返回-1
#include<stdio.h>
int search(int arr[], int a, int s)
{
	int right = s-1;
	int left = 0;
	
	while (left = right)

	{
		int mid = (right + left) / 2;
		if (arr[mid] > a)
		{
			right = mid - 1;
		}
		else if (arr[mid] < a)
		{
			left = mid + 1;

		}
		else  return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//求素组的个数，一共10个元素共4*10=40个，一共字节4位一共是40/4=10 个元素
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = search(arr,k, sz);
	if (ret != -1)
	{
		printf("找到了 %d",ret);

	}
	else
	{
		printf("没找到");
	}
	return 0;

}