#define _CRT_SECURE_NO_WARNINGS 1
//���ú������ж��ֲ���
//һ����10�����飬Ҫ�� ���7���ڵ��±꣬������ҵ�����ӡ���Ҳ�������-1
#include<stdio.h>
int search(int arr[], int a, int s)
{
	int right = s-1;
	int left = 0;
	
	while (left = right)

	{
		int mid = (right + left) / 2;
		if (arr[mid] > a)
		{
			right = mid - 1;
		}
		else if (arr[mid] < a)
		{
			left = mid + 1;

		}
		else  return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//������ĸ�����һ��10��Ԫ�ع�4*10=40����һ���ֽ�4λһ����40/4=10 ��Ԫ��
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = search(arr,k, sz);
	if (ret != -1)
	{
		printf("�ҵ��� %d",ret);

	}
	else
	{
		printf("û�ҵ�");
	}
	return 0;

}