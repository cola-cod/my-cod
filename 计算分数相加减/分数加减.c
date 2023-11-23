#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	//求1/1-1/2+1/3.......+1/99-1/100
	//第一种
	int i = 0;
	double sum = 0.0;  //这里需要用double不能用int，这样得出的结果为小数
	for (i = 1; i < 100; i++)
	{
		if (i % 2 == 0)
			sum = sum - 1.0 / i;
		else
			sum = sum + 1.0 / i;
		
	}
	printf("%lf\n", sum);
	return 0;
}
int main()
{
	int b = 0;
	int suu = 0;
	int flag = 1;
	for (b = 1; b < 100; b++)
	{
		suu += flag * 1.0 / b;
		flag = -flag;
		//这里是利用一个flag来改变数值的正负第一次是正第二次就变成负，这样就形成了一加一减
	}
	printf("%d\n",suu);
	return 0;



}