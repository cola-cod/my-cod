#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{ 
	int i = 0;
	int tem = 1;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		
		tem = tem * i;
		printf("%d\n", tem);
	}
	return 0;
}