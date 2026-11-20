#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct Node
{
	int data;
	struct Node* link;
};
void insert(struct Node**p ,int data)
	{
		struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
		temp1->data = data;
		temp1->link = NULL;
		struct Node* temp2 = *p;
		if (*p == NULL)
		{
			*p = temp1;
			return;
		}
		while (temp2->link != NULL)
		{
			temp2 = temp2->link;
		}
		temp2->link = temp1;
}
struct Node* reverse(struct Node* p)
{
	if (p == NULL || p->link == NULL) return p;
	struct Node* final = reverse(p->link);
	p->link->link = p;
	p->link = NULL;
	return final;

}

void Print(struct Node*head)
{
	struct Node* temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->link;
	}
}
int main()
{
	struct Node* head=NULL ;
	insert(&head, 7);
	insert(&head, 3);
	insert(&head, 8);
	insert(&head, 4);
	insert(&head, 5);
	Print(head);
	head=reverse(head);
	printf("\n");
	Print(head);
		

}
