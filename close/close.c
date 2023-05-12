#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 30");
again:
	printf("你的电脑将会在30秒后关机注销，请输入：我是猪   ，取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");

	}
	else
	{
		
			goto again;
	}
	return 0;
}