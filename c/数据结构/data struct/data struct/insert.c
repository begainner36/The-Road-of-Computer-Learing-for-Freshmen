//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//struct Node
//{
//	int data;
//	struct Node* link;
//};
//struct Node* head ;
//void insert(int x)
//{
//	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
//	temp->data = x;
//	temp->link = head;
//	head = temp;
//}
//void Print()
//{
//
//	struct Node* temps = head;
//	while (temps != NULL)
//	{
//		printf("%d  ",temps->data);
//		temps = temps->link;
//	}
//	printf("\n");
//}
//int main()
//{
//	head = NULL;
//	int x, n, i;
//	printf("共有多少个数字  ");
//	scanf_s("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		printf("请输入数据： ");
//		scanf_s("%d", &x);
//		insert(x);
//		Print();
//	}
//
//}