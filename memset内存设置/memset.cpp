#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()

{
	//memset���ڴ����ã������޸�һ��ֵ�Ľ��
	//����   ��ʽ memset��void * arr��int value ��size_t num����һ����ַ�������һ��ֵ�ĳ���һ��value��������ҿ��Կ����޸ļ����ֽڵĽ��unm
	char arr1[] = "nihao666";
	memset(arr1, 'x', 3);//�޸�arr1��ַ��ǰ�����ֽڰ�ֵ�޸ĳ�x
	printf("%s", arr1);
	return 0;
}
