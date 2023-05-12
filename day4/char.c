#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
	//根据转义字符的特性求打印出来的字符长度
	printf("%d\n", strlen("adcd"));
	printf("%d\n", strlen("c\d\329\a\abc"));
	printf("%d\n", strlen("c\d\322\a\abc"));
	//答案 4 8 7
	//\322是转义字符代表八进制也就是 3*8^2+2*8^1+2*8^0最后得出的数值与ASCII表进行对应得出的字符
	return 0;

}