#define _CRT_SECURE_NO_WARNINGS 1
//���ú����ķ�ʽ���庯��Ȼ�����������󷵻�������ֵ
#include<stdio.h>

int last(int x)
{
	int b = 0;
	for (b = 2; b < x; b++) //for(b=2;b<sqrt(x);b++)x�Ŀ�ƽ��
	{
		if (x % b == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	
	for (i = 100; i <= 200; i++)
	{
		if (last(i)  == 1)
		{
			
			count++;
			printf("������ %d", i);
		}
	}
		printf("\n%d", count);
	return 0;

}