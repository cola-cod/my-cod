#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
//1������ͨ�����͵ķ�ʽ��ϰ����
	int a = 9;
	int b = 2;
	int c = a / b;
	printf("%d\n", c);

//2������ͨ���������ķ�ʽ���м���Ҫ�����С��,����ʹ��float���ֻ�������С������ʽ����

	float f = 9;
	float d = 2;
	float r = 9.0 / 2.0;
	printf("%f\n", r);
	return 0;

}