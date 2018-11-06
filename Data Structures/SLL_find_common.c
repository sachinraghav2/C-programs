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

mynode *intersect(mynode *head1,mynode *head2,mynode *head3)
{
	mynode *temp3=head3;
	while((head1!=NULL)&&(head2!=NULL))
	{
		if(head1->val==head2->val)
		{
			mynode *temp=malloc(sizeof(mynode));
			temp->val=head1->val;
			temp->next=NULL;
			if(head3==NULL)
			{
				head3=temp;
				temp3=temp;
			}	
			else
			{
				while(temp3->next!=NULL)
					temp3=temp3->next;
				temp3->next=temp;
			}
		}
		head1=head1->next;
		head2=head2->next;
	}
	return head3;
}
		
int main()
{
	int ch,val,afterval;
	mynode *head1,*head2,*head3;
	head1=NULL,head2=NULL,head3=NULL;
	while(1)
	{
		printf("\n");
		printf("Choose:\n1.insert in L1.\n2.insert in L2.\n3.delete from L1\n4.delete from L2\n5.display contents in both L1&L2&L3.\n6.store L1 intersection L2 in L3.\n7.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the value: ");
				scanf("%d",&val);
				head1=insert_beg(head1,val);
				break;
			case 2: printf("Enter the value: ");
				scanf("%d",&val);
				head2=insert_beg(head2,val);
				break;
			case 3: head1=delete_beg(head1);
				break;
			case 4: head2=delete_beg(head2);
				break;
			case 5: printf("List 1:\n");
				display(head1);
				printf("\nList 2:\n");
				display(head2);
				printf("\nList 3:\n");
				display(head3);
				break;	
			case 6: head3=intersect(head1,head2,head3);
				break;
			case 7: exit(0);
			default: printf("Enter proper choice!!!\n");
		}
	}
	return 0;
}
