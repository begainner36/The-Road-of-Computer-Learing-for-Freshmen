//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//struct Node
//{
//	int data;
//	struct Node* link;
//};
//struct Node* head;
//void insert(int data)
//{
//	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
//	temp1->data = data;
//	temp1->link = NULL;
//	if (head == NULL)
//	{
//		head = temp1;
//		return;
//	}
//	struct Node* temp2 = head;
//	while (temp2->link != NULL)
//	{
//		temp2 = temp2->link;
//	}
//	temp2->link = temp1;
//
//}
//void Print()
//{
//	struct Node* temp = head;
//	while (temp != NULL)
//	{
//		printf("%d ", temp->data);
//		temp = temp->link;
//	}
//}
//void reverse()
//{
//	struct Node* cur = head;
//	struct Node* pre = NULL;
//	struct Node* next;
//	while (cur != NULL)
//	{
//		next = cur->link;
//		cur->link = pre;
//		pre = cur;
//		cur = next;
//	}
//	head = pre;
//
//
//}
//int main()
//{
//	head = NULL;
//	insert(2);
//	insert(3);
//	insert(5);
//	insert(6);
//	insert(3);
//	insert(7);
//	Print();
//	reverse();
//	printf("\n");
//	Print();
//
//
//}