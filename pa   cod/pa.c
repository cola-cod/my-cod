#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{   //char ch = 'w';
	//char* pc = &ch;
	//printf����%p����&ch����
	//���ch�ĵ�ַ
	int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("%d\n", a);
	//ͨ��a�ĵ�ַ�޸�a����ֵ
	
	/*printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(char*));*/
	return 0;
}