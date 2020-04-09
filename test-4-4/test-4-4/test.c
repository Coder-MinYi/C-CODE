#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(){
//	int money = 0;
//	printf("请输入现金数目: ");
//	scanf("%d", &money);           
//	int empty = money;	               //用empty表示空瓶子的数目
//	int count = money;	               //用count来表示我们可以喝的瓶数
//	while (empty >= 2)
//	{	
//		count = count + empty / 2;	    //可以喝的汽水数目就是现金买到的和瓶子交换的
//		empty = empty / 2 + empty % 2;	//若空瓶数目为2的倍数,除以2就是空瓶数目,否则要再模2(是2的倍数时,模2即为0)
//	}
//	printf("可以喝%d瓶汽水!\n", count);
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
//	//方法1
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
***猜数字游戏
*/
void play(int x)
{
	int number = 0;
	printf("请输入数字\n");
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
	/*生成随机数字*/
	//num = rand();
	srand(time(NULL));
	num = rand() % 100;


again:
	{
		printf("开始游戏\n1.开始\n2.退出\n");
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
