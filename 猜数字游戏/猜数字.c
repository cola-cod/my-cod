#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("********************************\n");
	printf("***********  1.玩游戏 **********\n");
	printf("***********  2.退出   **********\n");
	printf("********************************\n");
	printf("********************************\n");
}
void game()
{
	//srand((unsigned int)time(NULL));

	//利用rand生成随机数 但是题目是控制在0-100那么需要取模0-99之后加+1就是0-100；
		int ret = rand() %101;
		int guess = 0;
		
		//printf("%d", ret);
		while(1)//这里用1进行死循环一直猜一直到猜对.也是当1为真时一直猜
		{
			printf("请猜数字：");
			scanf("%d", &guess);
			
			if (guess < ret)
			{
				printf("猜小了！\n");
			
			}

			else if (guess > ret)
			{
				printf("猜大了！\n");
			}
			else   if(guess =ret)
			{
				printf("恭喜猜对啦！结果为%d\n",ret);
				break;
			}
			
		}
	//游戏内容的实现（1.生成随机数2.猜数字）
	//随机数的生成利用库函数
	//rand 是用来生成随机数（头文件include<stdlib.h>）
	//但是随机数每次的生成都是一样所以需要一个“时间戳”，利用时间戳每次的生成的数字都是不一样的
	//利用srand需要头文件和rand一样     格式srand((unsigned int)time (数值))  
	// //srand是在rand之前就需要调用作用是设置一个随机数的起点,利用srand生成随机数的时候每次只需要设置一次起始点就可以
	// 如果每次都设置起始点那么随机数每次都在变，永远也猜不到所以在这里将srand放在了主函数中
	//time库函数是时间戳，利用计算机自带的时间来转换成相较于计算机的起始时间之间的差值以秒为单位//time的返回类型是time_t
	//也就是整型 需要头文件include<time.h>
 


}
int main()
{
	//猜数字游戏，首先进行选择是否玩游戏玩扣一不玩扣0
	//生成随机数字1-100
	//如果猜大了提示猜小了也提示
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
		    menu();//库函数需要在全局中设置     作用打印菜单
			printf("请选择：\n");
			
			scanf("%d", &input);
			switch (input)
			{ 
			case 1:
				game();
					break;
			case 2:
					printf("退出游戏");
					break;
			default:
				    printf("输入错误请重新输入");
				    break;
			}
			

		
	}

	while (input);


	return 0;

}