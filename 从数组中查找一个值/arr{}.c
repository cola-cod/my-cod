#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	//从10个数中找到想要找到的数字，利用数组加上二分查找，利用下下标来找到对应的数字
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//这个是需要查找的数字
	int sz = sizeof(arr) / sizeof(arr[0]);
	//数组元素个数=数组所占大小/单个数组元素所占大小
	//这是数组的元素个数、、利用第一个saizeof求出整个数组的大小除以第一个数组的
	int left = 0;//从左边起第一个给left下标是0开始
	int right = sz - 1;//因为从0开始有多少数就会少一位
	while (left<=right)//利用循环进行二分查找，如果两个数除以二之后的下标在目标的右边那么左边的值需要修改
		               //进行新的二分查找（范围每次减掉一半）
	{

		int mid = (left + right) / 2;//设置中间值之后利用这个值进行修改位置
		if (arr[mid] < k)
		{
			left = mid + 1;
		}

		else if (arr[mid] > k)
		{

			right = mid - 1;
		}
		else
		{
			printf("找到了下标是:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}