#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ú����ݹ�ķ������ַ������ȣ����ܴ�����ʱ������
//֮ǰѧ��strlen���ַ�������
/*һ��д��
* 
* 
 int strlen_arr(char * arr)
 {
   int count=0;
   whlie(*arr != '\0')
   {
   count ++
   arr++
   
   }
   return count;

}
int mian����
{

char arr[]="bit";
printf("%d",strlen_arr(arr));

return 0��
}
����������Ե�����ĿҪ���ܴ�����ʱ����*/

int strlen_arr(char* arr)
{
	if (*arr != '\0')
	{


		return 1 + strlen_arr(arr + 1);
	}
	else
		return 0;

}

int main()
{
	char arr[] = "bit";
	printf("%d", strlen_arr(arr));

	return 0;
}
/*˵��Ϊʲô����arr++
arr++�������ڼӶ�����Ҫ���Ǽ�֮���ֵ������arr++��ı�arr��ֵ����1+arr�Ͳ���
����++arr��ȻҲ���ȼӵ�����Ȼ�ı䲻�� �޸�arr��ֵ



ԭ�����ͨ������arr�ĵ�ַ
��һ����ַb�������ɷ��ʣ�����it\0��Щֵ��Ҫarr+1��ָ��
ÿ��+1����Ӧ�ĵ�ַ�ǲ�һ���ĵ�һ����b�ڶ�����i��������tһֱ��\0���������֮�����õݹ��˼��ԭ·����
Ҳ����1+strlen_arr(arr+1)
Ҳ����1+1+strlen_arr(arr+1)
Ҳ����1+1+1+strlen_arr(arr+1)
Ҳ����1+1+1+0
��󷵻�0+1+1+1=3*/