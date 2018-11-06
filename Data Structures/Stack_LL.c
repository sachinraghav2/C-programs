#include<stdio.h>
#include<stdlib.h>
typedef struct stackRecord{
	int val;
	struct stackRecord *below;
	}mystack;
mystack *push(mystack *top, int val)
{
	mystack *temp=malloc(sizeof(mystack));
	temp->val=val;
	temp->below=NULL;
	if(top==NULL)
	{
		top=temp;
		return top;
	}
	temp->below=top;
	top=temp;
	return top;
}
mystack *pop(mystack *top)
{
	mystack *temp=top;
	if(top==NULL)
	{
		printf("The List is already empty.\n");
		return top;
	}
	top=top->below;
	free(temp);
	return top;
}
void display_stack(mystack *top)
{	printf("\n");
	if(top==NULL)
	{
		printf("Stack is empty.\n");
		return;
	}
	while(top!=NULL)
	{
		printf("%d\n",top->val);
		top=top->below;
	}	
	printf("\n");
}
int main()
{
	mystack *top;
	top=NULL;
	int ch,val;
	while(1)
	{
		printf("\n");
		printf("Choose:\n1.Push().\n2.Pop()\n3.display_stack()\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the value: ");
				scanf("%d",&val);
				top=push(top,val);
				break;
			case 2: top=pop(top);
				break;
			case 3: display_stack(top);
				break;
			case 4: exit(0);
			default: printf("Enter proper choice!!!\n");
		}
	}
	return 0;
}
