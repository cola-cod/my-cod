#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{//ģ���¼���δ���ͱ����أ���ȷ��ʾ������ȷ
	//����strcmp�������ж��ַ����Ƿ��������
	//����123456789
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", password);
		if (strcmp(password ,"123456789") == 0)//ʹ���ַ����Ƚϵ�ʱ������password==123456789������strcmp
		{                                     //�Ƚϵ��Ƕ�Ӧλ���ϵ�ascII��ֵ
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������!!\n");
		}
		
	}
	if (i == 3)
	{
		printf("��������������󣬳����˳�");

	}
	return 0;
}