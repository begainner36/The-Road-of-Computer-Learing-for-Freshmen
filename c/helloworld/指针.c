//#include<stdio.h>
//int method1(int num1, int num2);
//int method2(int num3, int num4);
//int method3(int num5, int num6);
//int method4(int num7, int num8);
//int main()
//{//函数指针
//	int(*p[4])(int, int) = { method1,method2 ,method3,method4 };
//	int a;
//	int b;
//	int c;
//	printf("请输入两个参与计算的数字:");
//	scanf_s("%d%d", &a, &b);
//	printf("请输入要选择的计算方法：\n1.加法\n2.减法\n3.乘法\n4.除法");
//	scanf_s("%d", &c);
//	
//	int num = p[c - 1](a, b);
//	printf("%d\n", num);
//}
//int method1(  int num1, int num2)
//{
//	return num1 + num2;
//}
//int method2( int num1,  int num2)
//{
//	
//	return num1 - num2;
//}
//int method3( int num1,  int num2)
//{
//
//	return num1 * num2;
//}
//int method4( int num1, int num2)
//{
//
//	return num1 / num2;
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
//	//int arr1[3] = {23,123,21};
//	//int arr2[6] = { 234,234,456,8 ,2,8};
//	//int arr3[9] = {24.5235,23,13,412,12,4,1,43};//这里的arr是int
//	//int len1 = sizeof(arr1) / sizeof(int);
//	//int len2 = sizeof(arr2) / sizeof(int);
//	//int len3 = sizeof(arr3) / sizeof(int);
//	//int len[3] = {len1,len2,len3};
//	//int*arr[3] = { arr1,arr2,arr3 };//这里的arr是int*
//	//int** p = arr;
//	//for (int i = 0;i < 3;i++)
//	//{
//
//	//	for (int j = 0;j < len[i];j++)
//	//	{
//	//		printf("%d\n", *(*(p+i) + j));//arr和&arr不等同！ 
//	//		//p表示的是arri
//	//		//+i来移动到下一个数组
//	//		// *(p+i)获取&arri
//	//		// 然后参与计算后退化为arri里的首地址
//	//		// 再+j来移动内地址
//	//		// 再用*(*(p+i)+j)遍历
//	//	}
//
//
//	//}
//	//
//	//
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
//	//二维数组指针遍历第一种格式
//	/*int arr[3][5] =
//	{ {12,3,1,3,3},
//		{21,12,3,21,12},
//		{324.234,23,42,212}
//
//	};
//	int(*p)[5] = arr;//这边指针p直接表示二维数组整体，*p表示获取一维数组地址
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 5;j++)
//		{
//			printf("%d\n", *(*(p+i)+j));
//		}
//	}*/
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
//	//二维数组
//	//int arr[3][4] =//第一个[]是二维数组的长度(多少个一维数组)
//	//	//第二个[]是一维数组的长度
//	//{
//	//	{1,2,3,4},
//	//	{4,45,6,53},
//	//	{6,45,6,456}
//	//};
//	//
//	//for (int i = 0;i < 3;i++)
//	//{
//	//	for (int j = 0;j < 4;j++)
//	//	{
//	//		printf("%d\n", arr[i][j]);
//	//	}
//	//	}
////	int arr1[3] = { 1,2,3 };
////	int arr2[5] = { 2,13,21,31,2 };
////	int arr3[9] = { 1,23,123,12,3,123,123,123,324 };
////	int len1 = sizeof(arr1) / sizeof(int);
////	int len2 = sizeof(arr2) / sizeof(int);
////	int len3 = sizeof(arr3) / sizeof(int);
////	int len[3] = { len1,len2,len3 };//在数组未退化时提前获取长度
////
////	int* arr[3] = { arr1,arr2,arr3 };//数组名参与计算时会退化为数组内第一个元素的指针，所以记得标记*！！！
////	for (int i = 0;i < 3;i++)
////	{
////		for (int j = 0;j < len[i];j++)
////		{
////			printf("%d\n", arr[i][j]);
////
////		}
////		printf("\n");
////
////
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
////int main()
////{
////	//利用指针遍历数组
////	int arr[4] = { 1,2,312,2 };
////	printf("%zu\n", sizeof(arr));
////	int* p1 = arr;
////	int* p2 = &arr;
////	printf("%p\n%p\n", p1 + 1, &arr+1);
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
////int main()
////{
////	int a = 10;
////	int b = 20;
////	//一级指针记录变量的地址
////	int* p1 = &a;
////	printf("a的地址%p\n", &a);//a的地址
////	
////	printf("b的地址%p\n", &b);//b的地址
////	//二级指针记录一级指针的地址
////	int** p2 = &p1;
////	//利用二级指针修改一级指针的内存地址
////	*p2 = &b;//把一级指针的地址改为b的地址
////	printf("%d\n", *p1);//b
////	printf("%p\n", p1);//b的地址
////	//利用二级指针获取变量里的数据
////	printf("%d\n", **p2);
////
////
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
//
//
//
////void swap(void* p1, void* p2, int len);
////int main()
////{
////	
////	long long a = 100;
////	long long b = 200;
////	
////	
////	 swap(&a,&b,8);
////	printf("%lld\n%lld\n", a, b);
////
////}
////void swap(void* p1, void* p2, int len)
////{
////	char* pc1 = p1;
////	char* pc2 = p2;
////	char temp = 0;
////	for (int i = 0;i < len;i++)
////	{
////		temp = *pc1;
////		*pc1 = *pc2;
////		*pc2 = temp;
////		pc1++;
////		pc2++;
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
////指针运算：与数据类型有关：
//	//char:1字节
//	//short：2字节
//	//long long：8字节
//
//	//printf("%d\n", *(p1 - 1));
//	//野指针：指针指向的空间未分配
//	//悬空指针：指针指向的空间已分配，但是已经被释放了
//	//int a = 10;
//	//int* p1 = &a;
//	//printf("%d\n", *p1);
//	//printf("%p\n", p1);
//	//int* p2 = p1 + 10;
//	//printf("%d\n", *p2);
//	////悬空指针
//	//int* p3 = method();
//	//printf("%p\n", p3);
//	//printf("%d\n", *p3);
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
////int find(int num1, int num2, int* res);
////int main()//利用指针将函数的结果和状态分开
////{
////	int a = 10;
////	int b = 3;
////	int res = 0;
////	int flag=find(a, b, &res);
////	if (!flag)
////	{
////		printf("%d\n",res);
////	}
////
////
////
////
////
////}
////int find(int num1, int num2, int* res)
////{
////	if (num2 == 0)
////	{
////		return 1;
////	}
////
////
////	*res = num1 % num2;
////	return 0;
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
////void getmaxandmin(int arr[], int len,int*max,int*min);
////int main()
////{
////	//指针返回多个值
////	int arr[10] = {1,23,432,423,42,35,25,23,4,123};
////	int len = sizeof(arr) / sizeof(int);
////	int max = arr[0];
////	int min = arr[0];
////
////	getmaxandmin(arr, len,&max,&min);
////	printf("%d\n", max);
////	printf("%d\n", min);
////
////
////
////
////
////
////
////}
////void getmaxandmin(int arr[], int len,int*p1,int*p2)
//////不写成int+变量是因为再传给函数就要多写一组数组，而指针可以直接修改变量里的值再还给变量，且int+变量在函数结束后无法调用，+static也会和数组冲突
////{
////	//求数组的最大值
////	
////	for (int i = 0;i < len;i++)
////	{
////		
////		if (arr[i] > *p1 )
////		{
////			*p1 = arr[i];
////		}
////		if (arr[i] < *p2)
////		{
////			*p2 = arr[i];
////		}
////	}
////	//第一种：
////	//int res[]={min,max};
////	//return res;
////	//z指针：在函数后加指针
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
////void swap(int* p1, int* p2);
////int main()
////{
////	int a = 10;
////	int b = 20;
////	printf("%d\n %d\n", a, b);
////	swap(&a, &b);
////	printf("%d\n %d\n", a, b);
////
////
////
////}
////void swap(int* p1, int* p2)
////{
////	int temp = *p1;
////	*p1 = *p2;
////	*p2 = temp;
////
////}