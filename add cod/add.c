#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
	//����x��y����֮�������ADD���߰�x��y�ϴ���x��y��
	//֮������z=x+y�ĺ�����ϵ,��x+y��ֵ��z����ӡ��z��ֵ��sum
}
int main()
{
	//����add����ʵ�ֽ� a+b �ĺ͸�c
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = ADD(a,b);
	printf("sum=%d\n", sum);
	return 0;
}