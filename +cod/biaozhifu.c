#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
//1这里是通过整型的方式练习除法
	int a = 9;
	int b = 2;
	int c = a / b;
	printf("%d\n", c);

//2这里是通过浮点数的方式进行计算要想出现小数,除了使用float数字还得是以小数的形式出现

	float f = 9;
	float d = 2;
	float r = 9.0 / 2.0;
	printf("%f\n", r);
	return 0;

}