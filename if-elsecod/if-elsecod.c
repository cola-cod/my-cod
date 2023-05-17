#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//训练if-else选择语句的运用
	int data = 0;
	printf("你喜欢学c语言吗?\n");
	printf("喜欢扣1,不喜欢扣2\n");
	scanf("%d", &data);
	if (data == 1)
	{
		printf("喜欢学c语言");
	}
	else
		printf("不喜欢");
	return 0;
}