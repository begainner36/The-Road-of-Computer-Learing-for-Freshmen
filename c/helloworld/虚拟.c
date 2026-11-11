//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = malloc(10 * sizeof(int));//指针p的步长取决于其数据类型
//	//2.赋值
//	for (int i = 0;i < 10;i++)
//	{
//		//所以p+1从第一个地址跳到第五个地址
//		*(p + i) = (i + 1) * 10;
//		//第二种
//		//p[i] = (i + 1) * 10;
//	}
//	//3.修改
//	printf("%p\n", p);
//	int*pp=realloc(p, 20 * sizeof(int));//修改后原来空间自动释放
//	
//	printf("%p\n", pp);
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	//	int num = 1024 * 1024*1024 ;
////	int count = 0;
////	while (1)
////	{
////		int* p = malloc(num);
////		count++;
////		if (p == NULL)
////		{
////			printf("申请失败");
////			break;
////		}
////		printf("第%d次申请成功%p\n", count, p);
//	}
////
