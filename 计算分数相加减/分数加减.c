#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	//��1/1-1/2+1/3.......+1/99-1/100
	//��һ��
	int i = 0;
	double sum = 0.0;  //������Ҫ��double������int�������ó��Ľ��ΪС��
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
		//����������һ��flag���ı���ֵ��������һ�������ڶ��ξͱ�ɸ����������γ���һ��һ��
	}
	printf("%d\n",suu);
	return 0;



}