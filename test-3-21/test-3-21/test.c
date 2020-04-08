#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n < 101; n++)
//	{
//		if (n % 10 == 9)
//		{
//			count++;
//		}
//		if (n / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("9的个数=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 1;
//	float sum = 0.0;
//	for (i = 1; i < 101; i++)
//	{
//
//			sum = j*(1.0/i)+sum;
//			j = -j;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	int i = 0;
//	int max = 0;
//	printf("请输入10个数:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10;i++)
//	if (arr[i]>max)
//		max =  arr[i];
//	printf("%d\n", max);
//	return 0;
//}
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (j <= i)
			{
				sum = i*j;
				printf("%d*%d=%d\t", i, j, sum);
			}
		}
		printf("\n");
	}
	return 0;
}
