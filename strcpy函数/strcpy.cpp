#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello";
	strcpy(arr1, arr2);//strcpy��һ��ַ�����ݸ��Ƶ�Ŀ�ĵض���ַ��  ��ʽ��char *Ŀ�ĵص�ַ��char*��Դ��ַ��
	printf("%s",arr1);//s�����ַ�������ʽ��ӡ
	return 0;



}