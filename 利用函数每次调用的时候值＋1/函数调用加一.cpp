#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void add(int* pn)
{
	(*pn)++;

}
int main()
{
	int num = 0;
	add(&num);
	//每次调用函数的时候num的值都会加一
	printf("%d\n", num);//1
	add(&num);
	printf("%d\n", num);//2
	add(&num);
	printf("%d\n", num);//3
	return 0;
}