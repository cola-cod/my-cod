#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double Pow(int n, int k)   //����ʹ��double����Ϊ��������˸�������ô��ʵ���Ǹ���ʱ���ʽ
							//���� 2^-3�ξ���1/2^3����Ҳ����С�����������ֻ��������intҲûɶ
{
	if (k == 0)				//֮���Ҫ����k��ȡֵ��Χһ��=0��һ��>0,һ��<0
								//����>0��n^k���� n^k-1����
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return 1.0 / (Pow(n, -k));
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d,%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;

}