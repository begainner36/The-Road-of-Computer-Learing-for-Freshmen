//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//struct Node {
//	int data;
//	struct Node* link;
//};
//struct Node* head;
//void insert(int data, int n)
//{
//	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
//	temp1->data = data;
//	temp1->link = NULL;
//	if (n == 1)
//	{
//		temp1->link = head;
//		head = temp1;
//		return;
//	}
//	struct Node*temp2 = head;
//	for (int i = 0;i < n-2 ;i++)
//	{
//		temp2 = temp2->link;
//	}
//	temp1->link = temp2->link;
//	temp2->link = temp1;
//	
//}
//void Print()
//{
//	struct Node*temp4 = head;
//	while (temp4 != NULL)
//	{
//		printf("%d ", temp4->data);
//		temp4 = temp4->link;
//	}
//}
//int main()
//{
//	head = NULL;
//	insert(2, 1);
//	insert(4, 2);
//	insert(5, 1);
//	insert(8, 2);
//	insert(9, 3);
//	Print();
//}