#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//寻找数字7
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//				break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//
//	int sz = sizeof(arr1)/ sizeof(arr1[0]);
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	printf("请输入查找数字：");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
int main()
{
	int arr[] = {0};
	int i = 0;
	printf("请输入录入数据数量：");
	scanf("%d", &i);
	printf("请输入%d个数据，以空格分开：\n",i);
	int k = 0;
	for (k = 0; k < i;k++)
	scanf("%d", &arr[i]);
	int m = 0;
	printf("请输入统计数字：");
		scanf("%d", &m);
		int n = 0;
		int f = 0;
	for (f = 0;f < i; f++)
	{
		if (arr[i] == m)
			n++;
	}
	printf("统计数字数目为：%d", n);
	return 0;
}








