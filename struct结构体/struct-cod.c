#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	char name[20];
	int age;
	double score;
};
int main()
{
	//1����struct֪ʶ��
	struct stu s = { "����",20,18.5 };
	//printf("%s %d %lf\n", s.name, s.age, s.score);
	//����ָ��
	struct stu* ps = &s;
	//printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	//or
		printf("%s %d %lf\n", ps->name, ps->age, ps->score);
	return 0;
}