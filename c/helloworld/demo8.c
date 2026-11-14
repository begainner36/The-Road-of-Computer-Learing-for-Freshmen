//#include<stdio.h>
//
//int main()
//{
//	//1.定义short,int,long,long long
//	short a = 10;
//	printf("%d\n", a);
//
//
//	//2.int整数类型Windows4个字节
//	int b = 10;
//	printf("%d\n", b);
//
//	//long长整形Windows4个字节
//    //      Linux32位4个字节64位8个字节
//	long c = 19292L;
//	printf("%ld\n", c);
//	//long long超长整型（c99）Windows8个字节
//	long long d = 123123LL;
//	printf("%lld\n", d);
//
//	//利用sizeof检测每一种数据类型占用的字节
//	// sizeof(变量名或数据类型)
//	//short
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(a));
//	//int
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(b));
//	//long
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(c));
//	//long long
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(d));
//
//
//
//
//	return 0;
//}