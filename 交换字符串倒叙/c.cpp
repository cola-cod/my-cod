#define _CRT_SECURE_NO_WARNINGS 1
//利用函数和非函数交换字符串中的字符用逆序，并且不能使用c语言中的库函数
//例如 char i="abc"
//       cba

//1.非递归
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
		char tmp = str[left];  //这里也可以写成tmp =*(str+left)
		str[left] = str[right];// *(str+right )        利用数组的下标str是0下标加减left和right就变成对应的下标
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

//2.利用递归
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
	*(str + len - 1)='\0';//放上一个、0为了进行下一地址的交换而不影响现在已经交换的值
	if (m_strlen(str + 1) >= 2) //判断条件
	{
		r_string(str + 1);
		//判断如果下一位之间的长度为2才能有条件进行交换

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
//利用交换   a和f交换，把a放在tmp中，之后在把f放到a的位置上，再利用递归进行bcde倒叙
//因为如果把a放回f的位置会导致系统误判将a加入b中，所以先调用递归最后才把a放到f中