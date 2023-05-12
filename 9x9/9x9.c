#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	int i = 1;
	int n = 1;
	int sum = 0;
	
	//scanf("%d", &n);
	for (i = 1; i <= 9; i++)
	{
		for (n = 1; n <= i; n++)
		
			
				
		printf("%d*%d=%-2d\t",n,i, i*n);
		printf("\n");

	}
	return 0;
}