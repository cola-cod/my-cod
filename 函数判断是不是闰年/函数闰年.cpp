#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int last_year(int x)
{

	if ((x % 4 == 0) &&( x %  100 != 0) || (x % 400 == 0))
	{
		return 1;
	}

	return 0;
}
int main()
{
	//���ú����ж��ǲ�������1000-2000
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (last_year(y) == 1)
			count++;
			printf("������%d  ", y);
		
	}
	printf("\n%d", count);
	return 0;
}