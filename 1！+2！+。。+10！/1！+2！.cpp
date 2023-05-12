#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{//求1！+。。。+10！的结果
	int i = 0;
	int n = 3;
	int ret = 1;
	int sum = 0;
	//scanf("%d", &n);
	//1 利用n的循环次数完成题目的10次结果最后相加，只不过必须要对ret重置，如果不重置那么每次循环ret
	//都会继承上一次循环的结果导致最后的结果不一致
	for (n = 1; n <= 10; n++)
	{
		int ret = 1;

		for (i = 1; i <= n; i++)
		{//1 12    123
			ret = ret * i;
			//1  2  6
		}	//1  3   9
		sum = sum + ret; 
	}
	printf("%d", sum);
	//2
	//for (i = 1; i <= n; i++)
	//{


	
	//利用2！=1！*2   3！=2！*3 
		//ret = ret * i ;
		//sum = sum + ret;
		//printf("%d\n", sum);

	//}
		
	return 0;

}