#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d", arr[i][j]);
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		//printf("\n");
//	}
//	return 0;
//}

void Bubblesort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + i];
				arr[j + 1] = tmp;
			}
		}
	}
}
void Printarr(int *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubblesort(arr,sz);
	Printarr(arr,sz);
	return 0;
}