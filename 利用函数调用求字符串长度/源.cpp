#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//利用函数递归的方法求字符串长度（不能创建临时变量）
//之前学过strlen求字符串长度
/*一般写是
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
int mian（）
{

char arr[]="bit";
printf("%d",strlen_arr(arr));

return 0；
}
这个方法可以但是题目要求不能创建临时变量*/

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
/*说明为什么不用arr++
arr++是先用在加而我需要的是加之后的值，而且arr++会改变arr的值而我1+arr就不会
并且++arr虽然也是先加但是依然改变不了 修改arr的值



原理就是通过访问arr的地址
第一个地址b可以轻松访问，但是it\0这些值需要arr+1来指定
每次+1所对应的地址是不一样的第一次是b第二次是i第三次是t一直到\0才算结束，之后利用递归的思想原路返回
也就是1+strlen_arr(arr+1)
也就是1+1+strlen_arr(arr+1)
也就是1+1+1+strlen_arr(arr+1)
也就是1+1+1+0
最后返回0+1+1+1=3*/