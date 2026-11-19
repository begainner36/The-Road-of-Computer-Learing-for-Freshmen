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
//	while (temp2 ->link!= NULL)
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
//void Delete(int n)
//{
//	struct Node* temps = head;
//	if (n == 1)
//	{
//		head = temps->link;
//		free(temps);
//		return;
//	}
//	for (int i = 0;i < n - 2;i++)
//	{
//		temps = temps->link;
//	}
//	struct Node* temp1 = temps->link;
//	temps->link = temp1->link;
//	free(temp1);
//}
//int main()
//{
//	head = NULL;
//	insert(3);
//	insert(4);
//	insert(5);
//	insert(8);
//	Print();
//	Delete(3);
//	printf("\n");
//	Print();
//	return;
//}