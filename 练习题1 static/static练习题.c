#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int sum(int a)
{
	int c = 3;
	static int b = 2;
	c += 2;
	b += 1;
	return (a + b + c);

}
int main()
{
	int a = 1;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", sum(a));
	}
}