#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 30");
again:
	printf("��ĵ��Խ�����30���ػ�ע���������룺������   ��ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");

	}
	else
	{
		
			goto again;
	}
	return 0;
}