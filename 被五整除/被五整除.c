#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 5 == 0)
		printf("yes");
	else
		printf("no");

	return 0;
}