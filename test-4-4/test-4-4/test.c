#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(){
//	int money = 0;
//	printf("�������ֽ���Ŀ: ");
//	scanf("%d", &money);           
//	int empty = money;	               //��empty��ʾ��ƿ�ӵ���Ŀ
//	int count = money;	               //��count����ʾ���ǿ��Ժȵ�ƿ��
//	while (empty >= 2)
//	{	
//		count = count + empty / 2;	    //���Ժȵ���ˮ��Ŀ�����ֽ��򵽵ĺ�ƿ�ӽ�����
//		empty = empty / 2 + empty % 2;	//����ƿ��ĿΪ2�ı���,����2���ǿ�ƿ��Ŀ,����Ҫ��ģ2(��2�ı���ʱ,ģ2��Ϊ0)
//	}
//	printf("���Ժ�%dƿ��ˮ!\n", count);
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//����1
//	total = money;
//	empty = money;
//	while (empty>= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//
//	return 0;
//}
#include <stdlib.h>
#include <time.h>
/*
***��������Ϸ
*/
void play(int x)
{
	int number = 0;
	printf("����������\n");
again_1:
	{
		scanf("%d", &number);
		while (number != x)
		{
			if (number > x)
			{
				printf("Big\n"); goto again_1;
			}
			else
			{
				printf("Small\n"); goto again_1;
			}

		}printf("\n***Right***\n *********\n   ******\n   ****\n    **\n");
	}
}
int main()
{
	int k;
	int num = 0;
	/*�����������*/
	//num = rand();
	srand(time(NULL));
	num = rand() % 100;


again:
	{
		printf("��ʼ��Ϸ\n1.��ʼ\n2.�˳�\n");
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			play(num);
			goto again;
		case 2:
			break;
		}
	}


	system("pause");
	return 0;
}
