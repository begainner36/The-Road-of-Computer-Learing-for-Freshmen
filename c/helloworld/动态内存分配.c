//#include<stdio.h>
//#include<stdlib.h>
//void method(int* p, int size);
//int main()
//{
//	/*malloc 申请空间
//	calloc 申请空间+初始化
//	realloc 修改空间大小
//	free 释放空间*/
//
//	//malloc细节
////1.malloc创建的空间是字节
//// 2.malloc返回的是void类型的指针，没有步长概念，也无法获取空间中的数据，需要强转
//// //3.malloc返回的仅仅是首地址，没有总大小，最好定义一个变量记录总大小
//// 4.malloc申请的空间不会自动消失，如果不能正确释放，会导致内存泄露
//// 5.malloc申请的空间过多，会产生虚拟内存
//// 6.malloc申请的空间没有初始化值，需要赋值才能使用
//// 	7.free释放完空间之后，空间中的数据叫做脏数据，可能被清空，可能被修改为其他值
////9.realloc修改之后的空间。地址值有可能变化，也有可能不会变化，但是原本的数据不会丢失
//	//10.realloc修改后，无需释放原来的空间，函数底层会进行处理
//
//	int* p = malloc(10 * sizeof(int));//指针p的步长取决于其数据类型
//	//2.赋值
//	for (int i = 0;i < 10;i++)
//	{
//		//所以p+1从第一个地址跳到第五个地址
//		*(p + i) = (i + 1) * 10;
//		//第二种
//		//p[i] = (i + 1) * 10;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		//所以p+1从第一个地址跳到第五个地址
//
//		printf("%d\n", *(p + i));
//	}
//	////4.扩容，20个int类型的整数
//	//int* pp = realloc(p, 20 * sizeof(int));//扩容时会把原本的数据copy过来
//	//for (int i = 0;i < 20;i++)
//	//{
//	//	//所以p+1从第一个地址跳到第五个地址
//
//	//	printf("%d\n", *(p + i));
//	//}
//	//5.释放空间
//	free(p);
//	//
//	for (int i = 0;i < 10;i++)
//	{
//		//所以p+1从第一个地址跳到第五个地址
//
//		printf("%d\n", *(p + i));
//	}
//
//}
//	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	//二
//	//int*：步长
//	//p首地址
//	int* p = (int*)malloc(25 * sizeof(int));
//	//三
//	int size = 25;
//	 method(p,25);
//}
//void method(int* p, int size)
//{
//	for (int i = 0;i < size;i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//
//
//
//
//
