
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for(i = 0 ;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}