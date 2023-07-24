#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{//模拟登录三次错误就报错返回，正确提示输入正确
	//利用strcmp函数来判断字符串是否等于密码
	//密码123456789
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);
		if (strcmp(password ,"123456789") == 0)//使用字符串比较的时候不能用password==123456789必须用strcmp
		{                                     //比较的是对应位置上的ascII码值
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误请重新输入!!\n");
		}
		
	}
	if (i == 3)
	{
		printf("三次密码输入错误，程序退出");

	}
	return 0;
}