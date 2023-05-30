#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{

	char arr[] = "abc";
	char arr1[] = { 'a','b','c' };
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));
	return 0;
}