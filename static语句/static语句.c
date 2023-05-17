#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*void text()
{
	int a = 1;
	a++;
	printf("%d\n", a);


}*/


void text()
{
	static int a = 1;
	a++;
	printf("%d\n", a);
}
int main()
{

	int i = 0;
		while (i < 10)
		{
			text();
			i++;
		}
		//printf("%d\n", i);
	return 0;

}
