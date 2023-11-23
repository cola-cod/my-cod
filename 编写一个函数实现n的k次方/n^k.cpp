#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double Pow(int n, int k)   //这里使用double是因为如果出现了负数，那么其实就是个分时表达式
							//例如 2^-3次就是1/2^3次幂也就是小数，但如果都只是整数用int也没啥
{
	if (k == 0)				//之后就要讨论k的取值范围一个=0，一个>0,一个<0
								//其中>0是n^k次幂 n^k-1次幂
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return 1.0 / (Pow(n, -k));
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d,%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;

}