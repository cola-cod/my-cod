#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello";
	strcpy(arr1, arr2);//strcpy将一地址的内容复制到目的地二地址下  格式（char *目的地地址，char*来源地址）
	printf("%s",arr1);//s是以字符串的形式打印
	return 0;



}