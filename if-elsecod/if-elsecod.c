#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//ѵ��if-elseѡ����������
	int data = 0;
	printf("��ϲ��ѧc������?\n");
	printf("ϲ����1,��ϲ����2\n");
	scanf("%d", &data);
	if (data == 1)
	{
		printf("ϲ��ѧc����");
	}
	else
		printf("��ϲ��");
	return 0;
}