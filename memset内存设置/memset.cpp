#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()

{
	//memset是内存设置，可以修改一个值的结果
	//例如   格式 memset（void * arr，int value ，size_t num）将一个地址的里面的一个值改成另一个value结果，并且可以控制修改几个字节的结果unm
	char arr1[] = "nihao666";
	memset(arr1, 'x', 3);//修改arr1地址的前三个字节把值修改成x
	printf("%s", arr1);
	return 0;
}
