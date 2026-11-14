//#include<stdio.h>
//int printarr(int arr[], int len);
//int main()
//{
//	int arr[] = { 123,4,344,234,23 };
//	int len = sizeof(arr) / sizeof(int);
//	printarr( arr,  len);
//	for (int i = 0;i < len - 1;i++)
//	{
//		int j = i + 1;
//		while (j < len)
//		{
//			if (arr[i] > arr[j])
//			{
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//			j++;
//		}
//
//	}
//	printarr(arr, len);
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//}
//int printarr(int arr[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////int printarr(int arr[], int len);
////int main()
////{
////	int arr[] = { 12,324,4,15,22,31,42,24 };
////	int len = sizeof(arr) / sizeof(int);
////	printarr(arr, len);
////	for (int i = 0;i < len - 1;i++)
////	{
////		for (int j =  0;j < len - i - 1;j++)
////		{
////			int  a = j + 1;
////			if (arr[j] > arr[a])
////			{
////				int temp = arr[j];
////				arr[j] = arr[a];
////				arr[a] = temp;
////			}
////
////		}
////
////
////	}
////	printarr(arr, len);
////
////
////
////
////
////
////
////
////
////
////
////
////}
////int printarr(int arr[], int len)
////{
////	for (int i = 0;i < len;i++)
////	{
////		printf("%d\n", arr[i]);
////	}
////
////
////
////
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////int find(int arr[], int len, int num);
////int main()
////{
////	int arr[5] = { 1,2,3,4,5 };
////	int len = sizeof(arr) / sizeof(int);
////	int num = 2;
////	
////	int index=find( arr, len,num);
////	printf("%d\n", index);
////
////
////
////
////
////}
////int find(int arr[], int len, int num)
////{
////	int min = 0;
////	int max = len - 1;
////while(min<=max)//ע��Ⱥ�
////	{
////		
////		int mid = (min + max) / 2;
////		if (arr[mid] < num)
////		{
////			min = mid + 1;
////		}
////		if (arr[mid] > num)
////		{
////			max = mid - 1;
////		}
////		if(arr[mid]==num)
////		{
////			return mid;
////		}
////
////	}
////	return -1;
////
////
////
////
////
////}
////
////
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////#include<stdlib.h>
////#include<time.h>
////int printarr(int arr[], int len);
////int main()
////{
////	//1.��������
////	int arr[5] = { 1,2,3,4,5 };
////	int len = sizeof(arr) / sizeof(int);
////	
////	//2.���������
////	srand(time(NULL));
////	
////	for (int i = 0; i < len; i++)
////	{
////		int num = rand() % 5;
////		int temp = arr[i];
////			arr[i] = arr[num];
////				arr[num] = temp;
////
////	}
////	printarr( arr,  len);
////
////
////
////
////
////
////
////
////
////}
////
////int printarr(int arr[], int len)
////{
////
////	for (int i = 0; i < len; i++)
////	{
////		printf("%d\n", arr[i]);
////	}
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////int appear(int arr[], int len);
////int main()
////{
////
////	int arr[5] = { 0 };
////	int len = sizeof(arr) / sizeof(int);
////	for (int i = 0;i < len;i++)
////	{
////		printf("������ڣ�%d\n��Ԫ��",i+1);
////		scanf("%d", &arr[i]);
////	}
////	appear(arr, len);
////	int i = 0;
////	int j = len - 1;
////	while (i < j)
////	{
////		int temp = arr[i];
////		arr[i] = arr[j];
////		arr[j] = temp;
////		i++;
////		j--;
////	}
////	appear(arr, len);
////	
////}
////
////
////
////
////
////
////
////int appear(int arr[], int len)
////{
////	for (int i = 0;i < len;i++)
////	{
////		printf("%d\n", arr[i]);
////
////	}
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////reoccur(arr, len, num);//函数要先在上方定义才能被调用
////int main()
////{
////	//1.定义一个数�?
////	int arr[10] = {0};
////	int len = sizeof(arr) / sizeof(int);
////	//2.生成1-100的随机数
////	srand(time(NULL));
////	//3.把随机数存入数组�?
////	for (int i = 0;i < len;)
////	{
////		int num = rand() % 100 + 1;//随机数要在循环内生成！！�?
////		int flag = reoccur(arr, len, num);
////		if (!flag)
////		{
////			arr[i] = num;
////			i++;//如果重复，i保持不变
////		}
////		
////	}
////	for (int i = 0;i < len;i++)
////	{
////		printf("%d\n", arr[i]);
////
////
////	}
//
//
//
//
//
//
//
//
//
//
//
////}
//////要求不能重复，所以定义一个函数查�?
////int reoccur(int arr[], int len, int num)
////{
////	for (int i = 0;i < len;i++)
////	{
////		if (arr[i] == num)
////		{
////			return 1;
////		}
////		
////
////	}
////
////	return 0;
////
////}