#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数递归
//函数递归我的想法是回像一个小梯子一样一个程序进行后接着调用这个函数将一层叠加一层，知道最后结束时在原路返回

void prin(unsigned  int a)
{
	//因为我不需要返回的值因此这里使用void
	if (a > 9)
	{
		prin(a / 10);
		//这里就是利用函数递归  函数调用函数回到主函数prin然后又进入prin中
		//这里是为了数字进行拆分
		//想打印每一位的数，例如1234第一位是直接用1234%10取4，第二位是用1234先除10之后得到123然后再%10取3这样一次类推
		//知道最后剩1的时候跳出循环然后倒着返回递归，一次打印出1 2 3 4
	}
	printf("%d ", a % 10);

}


int main()
{
	//我利用输入语句打印一个无符号的整数然后按顺序按位一一打印出每位的值
	unsigned  int num = 0;
	scanf("%u", &num);//按无符号10进制打印
	prin(num);


	return 0;
}