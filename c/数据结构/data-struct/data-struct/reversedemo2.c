//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//struct node
//{
//	int data;
//	struct node* link;
//};
//void insert(struct node**p ,int data)
//	{
//		struct node* temp1 = (struct node*)malloc(sizeof(struct node));
//		temp1->data = data;
//		temp1->link = null;
//		struct node* temp2 = *p;
//		if (*p == null)
//		{
//			*p = temp1;
//			return;
//		}
//		while (temp2->link != null)
//		{
//			temp2 = temp2->link;
//		}
//		temp2->link = temp1;
//}
//struct node* reverse(struct node* p)
//{
//	if (p == null || p->link == null) return p;
//	struct node* final = reverse(p->link);
//	p->link->link = p;
//	p->link = null;
//	return final;
//
//}
//
//void print(struct node*head)
//{
//	struct node* temp = head;
//	while (temp != null)
//	{
//		printf("%d ", temp->data);
//		temp = temp->link;
//	}
//}
//int main()
//{
//	struct node* head=null ;
//	insert(&head, 7);
//	insert(&head, 3);
//	insert(&head, 8);
//	insert(&head, 4);
//	insert(&head, 5);
//	print(head);
//	head=reverse(head);
//	printf("\n");
//	print(head);
//		
//
//}
