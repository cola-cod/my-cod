#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int MAX(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}
int main()
{


	int a = 0;
	int b = 0;
	int Max = 0;
	scanf("%d %d", &a, &b);
	Max = MAX(a,b);
	printf("最大值为；%d\n", Max);

	return 0;
}

