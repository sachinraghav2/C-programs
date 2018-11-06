#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char postfix[20];
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
int pop(mystack *s)
{
	if(isEmpty(s))
		printf("Stack is already empty.\n");
	else
	{
		int temp;
		temp=s->array[s->top];
		s->top--;
		return temp;
	}
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
int eval_postfix(mystack *s)
{
	int a,b,result;
	for(int i=0;i<strlen(postfix);i++)
	{
		if(postfix[i]>='0'&&postfix[i]<='9')
			push(s,postfix[i]-'0');
		else
		{
			a=pop(s);
			b=pop(s);
			switch(postfix[i])
			{
				case '+': result=b+a;
					  push(s,result);
						break;
				case '-': result=b-a;
					  push(s,result);
						break;
				case '*': result=b*a;
					  push(s,result);
						break;
				case '/': result=b/a;
					  push(s,result);
						break;
				case '%': result=b%a;
					  push(s,result);
						break;
			}
		}
	}
	result=pop(s);
	return result;
}
			
int main()
{
	mystack *s=createStack(20);
	printf("Enter the postfix expression: ");
	gets(postfix);
	printf("Value of postfix is %d.\n",eval_postfix(s));
	return 0;
}
	
