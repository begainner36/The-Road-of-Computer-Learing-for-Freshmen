//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//struct Node
//{
//	int data;
//	struct Node* link;
//};
//struct Node* head;
//struct Node* insert(struct Node* head, int data)
//{
//	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
//	temp1->data = data;
//	temp1->link = NULL;
//	struct Node* temp2 = head;
//	if (head == NULL)
//	{
//		head = temp1;
//		return;
//	}
//	while (temp2->link != NULL)
//	{
//		temp2 = temp2->link;
//	}
//	temp2->link = temp1;
//	return head;
//}
//void normalPrint(struct Node* p)
//{
//	if (p->link == NULL)
//	{
//		return;
//	}
//	printf("%d ", p->data);
//	normalPrint(p->link);
//}
//void reversePrint(struct Node* p)
//{
//	if (p->link == NULL)
//	{
//		return;
//	}
//	reversePrint(p->link);
//	printf("%d ", p->data);
//}
//int main()
//{
//	struct Node* head = NULL;
//	head =insert(head, 5);
//	insert(head, 3);
//	insert(head, 32);
//	insert(head, 3);
//	insert(head, 9);
//	normalPrint(head);
//	printf("\n");
//	reversePrint(head);
//
//}
