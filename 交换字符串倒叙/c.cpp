#define _CRT_SECURE_NO_WARNINGS 1
//���ú����ͷǺ��������ַ����е��ַ������򣬲��Ҳ���ʹ��c�����еĿ⺯��
//���� char i="abc"
//       cba

//1.�ǵݹ�
#include<stdio.h>
int m_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;

	}
	return count;
}
void r_string(char* str)
{
	int left = 0;
	int right = m_strlen(str) - 1;
	while (left < right)
	{
		char tmp = str[left];  //����Ҳ����д��tmp =*(str+left)
		str[left] = str[right];// *(str+right )        ����������±�str��0�±�Ӽ�left��right�ͱ�ɶ�Ӧ���±�
		str[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdef";
	r_string(arr);
	printf("%s\n", arr);
	return 0;


}

//2.���õݹ�
int m_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;

	}
	return count;
}
void r_string(char* str)
{
	char tmp = *str;
	int len = m_strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1)='\0';//����һ����0Ϊ�˽�����һ��ַ�Ľ�������Ӱ�������Ѿ�������ֵ
	if (m_strlen(str + 1) >= 2) //�ж�����
	{
		r_string(str + 1);
		//�ж������һλ֮��ĳ���Ϊ2�������������н���

	}
	*(str + len - 1) = tmp;
}
int main()
{
	char arr[] = "abcdef";
	r_string(arr);
	printf("%s\n", arr);
		return 0;
}
//���ý���   a��f��������a����tmp�У�֮���ڰ�f�ŵ�a��λ���ϣ������õݹ����bcde����
//��Ϊ�����a�Ż�f��λ�ûᵼ��ϵͳ���н�a����b�У������ȵ��õݹ����Ű�a�ŵ�f��