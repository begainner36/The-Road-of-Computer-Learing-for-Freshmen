//#include<stdio.h>
//
//int main()
//{
//	//1，定义float,double,long double数据类型的变量
//	//float单精度小数（精确度小数点后6位）Windows占4个字节（38位）
//	//2，利用sizeof测量每一种数据类型占用多少字节
//	float a = 1.93F;
//	printf("%.2f\n", a);
//
//	//double双精度小数（精确度小数点后15位）Windows占8个字节
//	double b = 1.65;
//	printf("%lf\n", b);
//
//	//long double高精度小数（精确后小时代后18 19位）
//	long double c = 3.1415926L;
//	printf("%lf\n", c);
//
//	//2.用sizeof测量每一种数据类型占用多少字节
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n", sizeof(b));
//	printf("%zu\n", sizeof(long double));
//	printf("%zu\n", sizeof(float));
//
//	//3.小数类型无法跟unsigned进行组合
//	unsigned float d = 1.23F;
//	printf("%f\n", d);
//
//
//	return 0;
//}