#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print_table(int n)
{
	int i = 0; //ÐÐ
	for (i = 1; i <= n; i++)
	{
		int k = 0;
		for (k = 1; k <= i; k++)
		{
			printf("%d*%d= %-2d", i, k, i*k);

		}
		printf("\n");
	}
	

}

int main()
{
	int  n = 0;
	scanf("%d", &n);
	print_table(n);


	return 0;
}