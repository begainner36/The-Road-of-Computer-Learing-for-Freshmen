#include<iostream>
#include<stack>
using namespace std;
struct Node {
	int data;
	struct Node* link;
};
struct Node* head;
void insert(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->link = head;
	head = temp;

}
void reverse()
{
	stack<struct Node*> S;
	struct Node* temp = head;
	while (temp != NULL) {
		S.push(temp);
		temp = temp->link;
	}
	temp = S.top();head = temp;
	S.pop();
	while (!S.empty())
	{
		temp->link = S.top();
		S.pop();temp = temp->link;
	}
	temp->link = NULL;
}
void Print()
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
	head = NULL;
	insert(3);
	insert(4);
	insert(5);
	insert(8);
	Print();
	reverse();
	Print();
}