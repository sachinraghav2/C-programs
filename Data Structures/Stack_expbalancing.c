#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char expression[20];
typedef struct stackRecord{
	int capacity,top;
	int *array;
	}mystack;
void makeEmpty(mystack *s)
{
	s->top=-1;
}
mystack *createStack(int max)
{
	mystack *s=(mystack *)malloc(sizeof(mystack));
	s->array=(int *)malloc(sizeof(int)*max);
	s->capacity=max;
	makeEmpty(s);
	return s;
}
int isEmpty(mystack *s)
{
	return s->top==-1;
}
int isFull(mystack *s)
{
	return (s->top)==(s->capacity-1);
}
void push(mystack *s,int val)
{
	if(isFull(s))
		printf("The stack is full!\n");
	else
		s->array[++s->top]=val;
}
void pop(mystack *s)
{
	if(isEmpty(s))
		printf("Stack is already empty.\n");
	else
		s->top--;
}
void display_stack(mystack *s)
{
	int temp=s->top;
	if(isEmpty(s))
		printf("The stack is empty!\n");
	else
	{
		while(temp!=-1)
		{
			printf("%d\n",s->array[temp]);
			temp--;
		}
	}
}
void balance(mystack *s)
{
	for(int i=0;i<strlen(expression);i++)
	{
		if(expression[i]=='(')
		{
			push(s,'(');
			continue;
		}
		if(expression[i]==')')
		{
			pop(s);
		}
	}
	if(isEmpty(s))
		printf("Expression is balanced.\n");
	else
		printf("Expression is not balanced.\n");
}
	
int main()
{
	mystack *s=createStack(20);
	printf("Enter the expression: ");
	gets(expression);
	balance(s);
	return 0;
}
