#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("********************************\n");
	printf("***********  1.����Ϸ **********\n");
	printf("***********  2.�˳�   **********\n");
	printf("********************************\n");
	printf("********************************\n");
}
void game()
{
	//srand((unsigned int)time(NULL));

	//����rand��������� ������Ŀ�ǿ�����0-100��ô��Ҫȡģ0-99֮���+1����0-100��
		int ret = rand() %101;
		int guess = 0;
		
		//printf("%d", ret);
		while(1)//������1������ѭ��һֱ��һֱ���¶�.Ҳ�ǵ�1Ϊ��ʱһֱ��
		{
			printf("������֣�");
			scanf("%d", &guess);
			
			if (guess < ret)
			{
				printf("��С�ˣ�\n");
			
			}

			else if (guess > ret)
			{
				printf("�´��ˣ�\n");
			}
			else   if(guess =ret)
			{
				printf("��ϲ�¶��������Ϊ%d\n",ret);
				break;
			}
			
		}
	//��Ϸ���ݵ�ʵ�֣�1.���������2.�����֣�
	//��������������ÿ⺯��
	//rand �����������������ͷ�ļ�include<stdlib.h>��
	//���������ÿ�ε����ɶ���һ��������Ҫһ����ʱ�����������ʱ���ÿ�ε����ɵ����ֶ��ǲ�һ����
	//����srand��Ҫͷ�ļ���randһ��     ��ʽsrand((unsigned int)time (��ֵ))  
	// //srand����rand֮ǰ����Ҫ��������������һ������������,����srand�����������ʱ��ÿ��ֻ��Ҫ����һ����ʼ��Ϳ���
	// ���ÿ�ζ�������ʼ����ô�����ÿ�ζ��ڱ䣬��ԶҲ�²������������ｫsrand��������������
	//time�⺯����ʱ��������ü�����Դ���ʱ����ת��������ڼ��������ʼʱ��֮��Ĳ�ֵ����Ϊ��λ//time�ķ���������time_t
	//Ҳ�������� ��Ҫͷ�ļ�include<time.h>
 


}
int main()
{
	//��������Ϸ�����Ƚ���ѡ���Ƿ�����Ϸ���һ�����0
	//�����������1-100
	//����´�����ʾ��С��Ҳ��ʾ
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
		    menu();//�⺯����Ҫ��ȫ��������     ���ô�ӡ�˵�
			printf("��ѡ��\n");
			
			scanf("%d", &input);
			switch (input)
			{ 
			case 1:
				game();
					break;
			case 2:
					printf("�˳���Ϸ");
					break;
			default:
				    printf("�����������������");
				    break;
			}
			

		
	}

	while (input);


	return 0;

}