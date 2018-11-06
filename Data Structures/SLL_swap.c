#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int val;
	struct node *next;
	}mynode;
mynode *insert_beg(mynode *head, int val)
{
	mynode *temp=malloc(sizeof(mynode));
	temp->val=val;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		return head;
	}
	temp->next=head;
	head=temp;
	return head;
	
}
mynode *delete_beg(mynode *head)
{
	mynode *temp=head;
	if(head==NULL)
	{
		printf("The List is already empty.\n");
		return head;
	}
	head=head->next;
	free(temp);
	return head;
}			
	
void display(mynode *head)
{	printf("\n");
	if(head==NULL)
	{
		printf("List is empty.\n");
		return;
	}
	while(head!=NULL)
	{
		printf("%d\n",head->val);
		head=head->next;
	}	
	printf("\n");
}
void swap(mynode *head)
{
	if(head==NULL)
	{
		printf("List is empty.\n");
		return;
	}
	mynode *temp=head;
	head=head->next;
	temp->next=head->next;
	temp=temp->next;
	head->next=temp->next;
	temp->next=head;
}
	
int main()
{
	int ch,val,afterval;
	mynode *head,*temp;
	head=NULL;
	while(1)
	{
		printf("Choose:\n1.insert_beg()\n2.delete_beg()\n3.display()\n4.Swap 2nd & 3rd element(using pointers).\n5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the value: ");
				scanf("%d",&val);
				head=insert_beg(head,val);
				break;
			case 2: head=delete_beg(head);
				break;
			case 3: display(head);
				break;
			case 4: swap(head);
				break;
			case 5: exit(0);
			default: printf("Enter proper choice!!!\n");
		}
	}
	return 0;
}
