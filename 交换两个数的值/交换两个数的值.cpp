#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void alt(int x, int y)
//{
//
//	int z = 0;
//	x = z;
//	x = y;
//	y = z;
//
//
//
//
//}
//int main()
//{
//
//	int a = 20;
//	int b = 10;
//	printf("交换前a=%d b=%d", a, b);
//	alt(a, b);
//	printf("交换后a=%d  b=%d", a, b);
//
//
//
//	return 0;
//
//}
//利用z的中间商来换两个数的值但是其中发现并没有交换成功，原因是两个局部变量中的ab值是不一样的，联系到存储地址的原因，虽然值一样
//但是拿取的存储地址不一样那是不行的，因此需要联系到指针，*pa来联系到地址

void alt(int* pa, int* pb)
{
	int z = 0;
	z = * pa;
	* pa = *  pb;
	* pb = z;





}
int main()
{
	int a = 10;
	int b = 20;
	printf("前 a=%d,b=%d", a, b);
	
	alt(&a, &b);
	printf("后a=%d b=%d", a, b);
	return 0;
}

