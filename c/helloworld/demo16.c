//#include<stdio.h>
////
//int main()
//{
	//	/*int a = 10;
	//	int b = 20;
	//	short c = (short)(a + b);
	//	printf("%zu\n", sizeof((short)(a + b)));
	//
	//	return 0;*/
	//	//printf("%d\n", 'B');
	//	/*int a;
	//	printf("请输入你的年龄");
	//	scanf("%d", &a);
	//	a++;
	//	printf("过了这个生日，你的年龄变成:%d\n", a);
	//	return 0;*/
	//	/*int i = 10;
	//	int b = 5;
	//	int k = i++ + ++i - --b - i--;
	//	printf("%d\n", k);*/
	//	int a = 10;
	//	int b = 20;
	//	printf("%d\n", a == b);
	//	printf("%d\n", a != b);
	//	printf("%d\n", a >= b);
	//	printf("%d\n", a <= b);
	//	printf("%d\n", a < b);
	//	printf("%d\n", a > b);

	//思考一：数学计算中，判断一个数是否位偶数
	//int a;
	//printf("请输入一个整数");
	//scanf("%d", &a);
	//printf("%d\n", a % 2 == 0);
	//思考二：判断所支付的金额是否超过余额
	/*int a;
	int b;
	printf("请输入你要支付的金额:\n还有你的余额:\n");
	scanf("%d %d", &a, &b);
	printf("%d\n", a <= b);*/
	//&&
	//int a = 10;
	//printf("%d\n", !(1 < a));
	//思考三：输入一个两位整数，并判断是否含有7
	/*int a;
	printf("请输入一个两位整数\n");
	scanf("%d", &a);
	printf("%d\n", (a % 10) != 7&& (a / 10) != 7);*/
	//三元运算符
	//获取两个变量中的较大值
	/*int a;
	int b;
	printf("请输入两个数");
	scanf("%d %d", &a, &b);
	printf("其中较大的数是：%d\n", a > b ? a : b);
	return 0;*/
	//获取三个变量中的最大值
	/*int a;
	int b;
	int c;
	printf("请输入三个整数");
	scanf("%d %d %d", &a, &b, &c);
	printf("最大值是：%d\n", a > b && a > c ? a:(b>c&&b>a?b:c));*/
	//逗号运算符
	/*int a;
	printf("请输入一个整数");
	scanf("%d", &a);
	
	printf("%d\n", (a = a >= 0 ? a : -a,a %=3, a *= 10));*/
	/*int a = 3;
	int b = 4;
	int c = 5;

	int n = a || b + c && b - c;
	printf("%d\n", n);*/



//}