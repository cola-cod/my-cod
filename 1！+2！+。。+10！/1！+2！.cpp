#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{//��1��+������+10���Ľ��
	int i = 0;
	int n = 3;
	int ret = 1;
	int sum = 0;
	//scanf("%d", &n);
	//1 ����n��ѭ�����������Ŀ��10�ν�������ӣ�ֻ��������Ҫ��ret���ã������������ôÿ��ѭ��ret
	//����̳���һ��ѭ���Ľ���������Ľ����һ��
	for (n = 1; n <= 10; n++)
	{
		int ret = 1;

		for (i = 1; i <= n; i++)
		{//1 12    123
			ret = ret * i;
			//1  2  6
		}	//1  3   9
		sum = sum + ret; 
	}
	printf("%d", sum);
	//2
	//for (i = 1; i <= n; i++)
	//{


	
	//����2��=1��*2   3��=2��*3 
		//ret = ret * i ;
		//sum = sum + ret;
		//printf("%d\n", sum);

	//}
		
	return 0;

}