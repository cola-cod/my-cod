#include <stdio.h>
int main()
{
	printf("整型的字节是%d\n", sizeof(int));
	printf("短整型的字节是%d\n", sizeof(short));
	printf("长整型的字节是%d\n", sizeof(long));
	printf("双长整型的字节是%d\n", sizeof(long long));
	printf("单精度整型的字节是%d\n", sizeof(float));
	printf("双精度整型的字节是%d\n", sizeof(double));

	return 0;
}