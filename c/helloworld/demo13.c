#include<stdio.h>
#include<string.h>
#include<time.h>
int main()
{
	//拷贝文件：把文件a的内容拷贝到a++
	FILE* E = fopen("E:\\abc\\ikuuu_vpn\\a.txt","r");
	FILE* F = fopen("E:\\abc++\\a++.txt", "w");
	char arr[5];
	char* str;
	while ((str = fgets(arr, 5, E)) != NULL)
	{
		fwrite(arr, 1, strlen(arr), F);
	}
	fclose(E);
	fclose(F);
















	////写出数据
	////fputc一次写一个字符，并返回该字符
	////fputs一次写一个字符串，写出成功返回非数
	////fwrite一次写多个，返回写出的数
	//FILE* E = fopen("E:\\abc\\ikuuu_vpn\\a.txt", "w");//无文件创建，有文件清空，a为追加写出
	//char str[3] = {1231,123,12332};
	//char p=fwrite(str, 1, 3, E);
	//fclose(E);
	//
	//
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//FILE* E =fopen( "E:\\abc\\ikuuu_vpn\\a.txt", "r");
	//char arr[4];
	//
	////读到的数据装在字符串里fgets，fread,且每一次都会覆盖前一次的内容
	//int n = fread(arr, 1, 4, E);//n表示第一次读到的字节个数
	// n = fread(arr, 1, 4, E);//再来一次覆盖原有字符
	////文件100字节
	////数组30字节
	//// 会一直读到90，然后第四次读10后剩余也都进去
	////没有数据后返回0
	////while ((n = fread(arr, 1, 4, E)) != 0)
	////{
	////	for (int i = 0;i < n;i++)
	////	{
	////		printf("%c", arr[i]);//读完前面
	////	}
	////}
	//

	//printf("%d\n", n);
	////printf("%s", arr);
	//fclose(E);




}