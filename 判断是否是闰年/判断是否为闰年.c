#define _CRT_SECURE_NO_WARNINGS 1
//�ж��Ƿ�Ϊ����ķ�����1.�ܷ�4���������ܱ�100����
//2.�ܷ�400����������(1000-2000)
#include<stdio.h>
int main()
{
	int year = 0;
	//��һ��
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
	//�ڶ���
	for (year=1000;year<=2000;year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d", -year);
		}
	}

	return 0;
}