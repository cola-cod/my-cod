#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//�����������ʮ����������δ�ӡ����ʮ������
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};

	int i = 0;
	//for (i = 0; i < 10; i++)
	//{
		//printf("%d", arr[i]);
	//}
	while(i<10)
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;

}