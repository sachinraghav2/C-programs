#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int val;
	struct node *next;
	}mynode;
mynode *insert_front(mynode *last,int val)
{
	mynode *temp=malloc(sizeof(mynode));
	temp->val=val;
	temp->next=NULL;
	if(last==NULL)
	{
		last=temp;
		temp->next=last;
		return last;
	}
	temp->next=last->next;
	last->next=temp;
	return last;
	
}
mynode *insert_end(mynode *last,int val)
{
	mynode *temp=malloc(sizeof(mynode));
	temp->val=val;
	temp->next=NULL;
	if(last==NULL)
	{
		last=temp;
		temp->next=last;
		return last;
	}
	temp->next=last->next;
	last->next=temp;
	last=temp;
	return last;
}
void display(mynode *last)
{
	mynode *temp=last->next;
	printf("\n");
	if(last==NULL)
	{
		printf("List is empty.\n");
		return;
	}
	while(temp!=last)
	{
		printf("%d\n",temp->val);
		temp=temp->next;
	}
	printf("%d\n",temp->val);	
	printf("\n");
}
int main()
{
	int ch,val;
	mynode *last=NULL;
	while(1)
	{
		printf("\n");
		printf("Choose:\n1.insert_front.\n2.Insert_end.\n3.Display.\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the value: ");
				scanf("%d",&val);
				last=insert_front(last,val);
				break;
			case 2: printf("Enter the value: ");
				scanf("%d",&val);
				last=insert_end(last,val);
				break;
			case 3: display(last);
				break;
			case 4: exit(0);
			default: printf("Enter proper choice!!!\n");
		}
	}
	return 0;
}
