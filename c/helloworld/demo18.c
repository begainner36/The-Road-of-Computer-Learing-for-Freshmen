//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[100] ;
//	printf("请输入一个字符串");
//	scanf("%s", str);
//	int a=0;
//	int b=0;
//	int c=0;
//	for (int i = 0;i < strlen(str);i++)
//	{
//		char c = str[i];
//		if (c>='a'&&c<='z')
//		{
//			a++;
//		}
//		if (c >= 'A' && c <= 'Z')
//		{
//			b++;
//		}
//		if (c >= '0' && c <= '9')
//		{
//			c++;
//		}
//
//	}
//	printf("小写有%d\n个", a);
//	printf("大写有%d\n个", b);
//	printf("数字有%d\n个", c);
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	//用户登录：已知正确的用户名和密码，模拟登录，且不超过三次
//	/*char rightuser[100] = "abc";
//	char rightpass[100] = "123456Lyc";
//	char str1[100];
//	char str2[100];
//	printf("请输入你的用户名和密码");
//	scanf("%s", &str1);
//	scanf("%s", &str2);
//	for (int i = 1;i <= 3;i++)
//	{
//		if (strcmp(str1, rightuser)==0&&strcmp(str2,rightpass)==0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			if (i == 3)
//			{
//				printf("登录系统已被锁定");
//				break;
//			}
//			else
//			{
//				printf("您的用户名或密码错误，还有:%d次输入机会", 3 - i);
//				scanf("%s", &str1);
//				scanf("%s", &str2);
//			}
//			}
//
//
//	}*/
//
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	//strlen:获取字符串长度
//	//strcat:拼接两个字符串
//	//strcpy:复制字符串
//	//strcmp:比较两个字符串
//	//strlwr:将字符串变成小写
//	//strupr:将字符串变成大写
//	//char* str1 = "abc";
//	//char str2[100] = "anc";
//	//char str3[5] = { 'a','b','c','d','\0'};
//	//int len1 = strlen(str1);
//	//int len2 = strlen(str2);
//	//int len3 = strlen(str3);
//	//printf("%d\n", len1);
//	//printf("%d\n", len2);
//	//printf("%d\n", len3);
//	//strcat(str2, str3);//前提是第一个字符串还有空间容纳
//	//printf("%s\n", str2);
//	//strcpy(str2, str3);//把第二个字符串的内容复制给第一个字符串，并把其原本的内容覆盖
//	//printf("%s\n", str2);
//	//printf("%s\n", str3);
//	//strcmp(str2, str3);//两个一样：0，不一样非0
//	//_strlwr(str2);//要加下划线且不能改中文
//
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	//第一种遍历
//	/*char strarr[5][100] =
//	{ "李泡泡",
//		"礼拜一",
//		"网评员",
//		"短尾听",
//		"小辉辉"
//	};
//	for (int i = 0;i < 5;i++)
//	{
//		char* str = strarr[i];
//		printf("%s\n", str);
//	}*/
//	//第二种遍历
//	/*char*strarr[5] =
//	{ "李泡泡",
//		"礼拜一",
//		"网评员",
//		"短尾听",
//		"小辉辉"
//	};
//	for (int i = 0;i < 5;i++)
//	{
//		
//		printf("%s\n", strarr[i]);
//	}
//	*/
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	//字符串的定义
//	//char str[4] = "abc";
//	//printf("%s\n", str);
//	//细节1：
//	//在底层，实际存储的时候，c语言还是会帮我们把字符串转换为字符数组进行保存，并且在末尾加上'\0'
//	//char* str = "abc";
//	//printf("%s\n", str);
//	//指针字符串的内容不可修改，且其内容可以复用
//
//	//遍历字符串
//	/*char str[5]=;
//	printf("请录入一个字符串");
//	scanf("%s", str);*/
//	////2.遍历字符串得到每一个字符
//	//char* p = str;
//	//while (1)
//	//{
//	//	char c = *p;
//	//	if (c == '\0')
//	//	{
//	//		break;
//	//	}
//	//	printf("%c\n", c);
//	//	p++;
//	//}
//}