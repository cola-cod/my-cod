#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	//��10�������ҵ���Ҫ�ҵ������֣�����������϶��ֲ��ң��������±����ҵ���Ӧ������
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//�������Ҫ���ҵ�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����Ԫ�ظ���=������ռ��С/��������Ԫ����ռ��С
	//���������Ԫ�ظ����������õ�һ��saizeof�����������Ĵ�С���Ե�һ�������
	int left = 0;//��������һ����left�±���0��ʼ
	int right = sz - 1;//��Ϊ��0��ʼ�ж������ͻ���һλ
	while (left<=right)//����ѭ�����ж��ֲ��ң�������������Զ�֮����±���Ŀ����ұ���ô��ߵ�ֵ��Ҫ�޸�
		               //�����µĶ��ֲ��ң���Χÿ�μ���һ�룩
	{

		int mid = (left + right) / 2;//�����м�ֵ֮���������ֵ�����޸�λ��
		if (arr[mid] < k)
		{
			left = mid + 1;
		}

		else if (arr[mid] > k)
		{

			right = mid - 1;
		}
		else
		{
			printf("�ҵ����±���:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}