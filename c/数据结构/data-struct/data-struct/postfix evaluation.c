#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 1024
int stack[MAX];
int top = -1;
void push( n)
{
	if (top >= MAX - 1)
	{
		printf("The stack is full");
		return;
	}
	else
		stack[++top] = n;

}
int pop()
{
	return stack[top--];
}
int main()
{
	char exp[MAX];
	fgets(exp, sizeof(exp), stdin);
	for (int i = 0;exp[i] != '\0';i++)
	{
		if (isspace((unsigned char)exp[i]));continue;
		if (isdigit((unsigned char)exp[i]))
		{
			push(exp[i]);
		}
		else 
		{
			int op2 = pop();
			int op1 = pop();
			switch((exp[i]))
			{
				case'*':push(op1 * op2);break;
				case'+':push(op1 + op2);break;
				case'-':push(op1 - op2);break;
					case'/':push(op1 / op2);break;
			}
		}
	}
	printf("%d\n", pop());
	return;
}