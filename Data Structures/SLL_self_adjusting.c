#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int val;
	struct node *next;
	}mynode;
mynode *insert_at_beg(mynode *head,int val)
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
mynode *delete_at_beg(mynode *head)
{
	mynode *temp=head;
	if(head==NULL)
	{
		printf("The List is already empty.\n");
		return head;
	}
	if(head->next==NULL)
	{
		head=NULL;
		free(temp);
		return head;
	}
	head=head->next;
	free(temp);
	return head;
}
mynode *self_adjusting_find(mynode *head, int val)
{
	mynode *temp1=head,*temp2=head;
	if(head==NULL)
	{
		printf("List is Empty.\n");
		return head;
	}
	while(temp2!=NULL)
	{
		if(temp2->val==val)
			break;
		temp1=temp2;
		temp2=temp2->next;
	}
	if(temp2==NULL)
	{
		printf("Element not present!\n");
		return head;
	}
	temp1->next=temp2->next;
	temp2->next=head;
	head=temp2;
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
int main()
{
	int ch,val;
	mynode *head=NULL,*temp;;
	while(1)
	{
		printf("\n");
		printf("Choose:\n1.insert_at_beg().\n2.delete_at_beg.\n3.Display.\n4.self_adjusting_find().\n5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the value: ");
				scanf("%d",&val);
				head=insert_at_beg(head,val);
				break;
			case 2: head=delete_at_beg(head);
				break;
			case 3: display(head);
				break;
			case 4:	printf("Enter the value to find: ");
				scanf("%d",&val);
				head=self_adjusting_find(head,val);
				break;
			case 5: exit(0);
			default: printf("Enter proper choice!!!\n");
		}
	}
	return 0;
}
