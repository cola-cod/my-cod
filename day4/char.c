#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
	//����ת���ַ����������ӡ�������ַ�����
	printf("%d\n", strlen("adcd"));
	printf("%d\n", strlen("c\d\329\a\abc"));
	printf("%d\n", strlen("c\d\322\a\abc"));
	//�� 4 8 7
	//\322��ת���ַ�����˽���Ҳ���� 3*8^2+2*8^1+2*8^0���ó�����ֵ��ASCII����ж�Ӧ�ó����ַ�
	return 0;

}