#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void alt(int x, int y)
//{
//
//	int z = 0;
//	x = z;
//	x = y;
//	y = z;
//
//
//
//
//}
//int main()
//{
//
//	int a = 20;
//	int b = 10;
//	printf("����ǰa=%d b=%d", a, b);
//	alt(a, b);
//	printf("������a=%d  b=%d", a, b);
//
//
//
//	return 0;
//
//}
//����z���м���������������ֵ�������з��ֲ�û�н����ɹ���ԭ���������ֲ������е�abֵ�ǲ�һ���ģ���ϵ���洢��ַ��ԭ����Ȼֵһ��
//������ȡ�Ĵ洢��ַ��һ�����ǲ��еģ������Ҫ��ϵ��ָ�룬*pa����ϵ����ַ

void alt(int* pa, int* pb)
{
	int z = 0;
	z = * pa;
	* pa = *  pb;
	* pb = z;





}
int main()
{
	int a = 10;
	int b = 20;
	printf("ǰ a=%d,b=%d", a, b);
	
	alt(&a, &b);
	printf("��a=%d b=%d", a, b);
	return 0;
}

