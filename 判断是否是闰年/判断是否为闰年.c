#define _CRT_SECURE_NO_WARNINGS 1
//判断是否为闰年的方法是1.能否被4整除，不能被100整除
//2.能否被400整除是润年(1000-2000)
#include<stdio.h>
int main()
{
	int year = 0;
	//第一种
	/*for (year = 1000; year <= 2000; year++)
	{

		if (year%4==0)
		{
			if (year % 100 != 0)
			{
				printf("%d\n", year);
			}
		}
		if (year % 400 == 0)
		{
			printf("%d\n", year);
		}
	}*/
	//第二种
	for (year=1000;year<=2000;year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d", -year);
		}
	}

	return 0;
}