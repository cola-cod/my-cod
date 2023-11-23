#define _CRT_SECURE_NO_WARNINGS 1
//已知 int fun(int n)
        // if(n==5)
        // return 2;   
        // else
        // return 2*fun(n+1)
//求fun（2）返回值为多少？？

//利用函数的递归性
//1.第一次 2 进入
//       2*fun(3)     ==16

//2     2*fun(4)      == 8

//3     2*fun(5)  ==4  之后再返回去

//end 答案为16