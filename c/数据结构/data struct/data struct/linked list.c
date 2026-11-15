#include<stdio.h>
#include<time.h> 
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* link;
};
int main()
{
	struct Node* A;
	A = NULL;
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* temp3 = (struct Node*)malloc(sizeof(struct Node));
	temp1->data = 2;
	temp1->link = temp2;
	A = temp1;
	temp2->data = 4;
	temp2->link = temp3;
	temp3->data = 6;
	temp3->link = NULL;
	struct Node* temps = (struct Node*)malloc(sizeof(struct Node));
	temps = A;
	while ((temps->link) != NULL)
	{
		temps = temps->link;
	}
	struct Node* temp4 = (struct Node*)malloc(sizeof(struct Node));
	temp4->data = 8;
	temp4->link = NULL;
	temps->link = temp4;
	printf("%d\n %p\n %p\n %p\n %p\n %p\n", temps->data, temp1->link, temp2->link, temp3->link,temp4->link,temps->link);
}