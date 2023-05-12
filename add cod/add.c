#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
	//设置x和y变量之后会利用ADD工具把x和y上传到x和y中
	//之后利用z=x+y的函数关系,将x+y的值给z最后打印出z的值给sum
}
int main()
{
	//利用add函数实现将 a+b 的和给c
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = ADD(a,b);
	printf("sum=%d\n", sum);
	return 0;
}