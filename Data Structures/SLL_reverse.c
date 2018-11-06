#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int val;
	struct node *next;
	}mynode;

mynode *insert_end(mynode *head, int val)
{
	mynode *temp=malloc(sizeof(mynode)),*temp1=head;
	temp->val=val;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		return head;
	}
	while(temp1->next!=NULL)
		temp1=temp1->next;
	temp1->next=temp;
	return head;
}
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
mynode *search(mynode *head, int val)
{
	if(head==NULL)
	{
		printf("List is Empty.\n");
		return head;
	}
	while(head!=NULL)
	{
		if(head->val==val)
			break;
		head=head->next;
	}
	return head;
}
mynode *insert_after(mynode *head,int val,int afterval)
{
	mynode *temp=malloc(sizeof(mynode)),*cur=head;
	temp->val=val;
	temp->next=NULL;
	if(head==NULL)
	{
		printf("The List is empty. Thus %d will be the 1st element now.\n",temp->val);
		head=temp;
		return head;
	}
	while(cur!=NULL)
	{
		if(cur->val==afterval)
		{
			temp->next=cur->next;
			cur->next=temp;
			return head;
		}
		cur=cur->next;
	}
	printf("Element not found!\n");
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
mynode *reverse(mynode *head)
{
	mynode *temp1=head,*temp2=head;
	if(head==NULL)
	{
		printf("List is empty.\n");
		return head;
	}
	if(head->next==NULL)
	{
		printf("List only has 1 element i.e. cannot be reversed.\n");
		return head;
	}
	head=head->next;
	temp1=head;
	head=head->next;
	temp2->next=NULL;
	while(head!=NULL)
	{
		temp1->next=temp2;
		temp2=temp1;
		temp1=head;
		head=head->next;
	}
	temp1->next=temp2;
	head=temp1;
	return head;
}
	
int main()
{
	int ch,val,afterval;
	mynode *head,*temp;
	head=NULL;
	while(1)
	{
		printf("Choose:\n1.insert_end()\n2.insert_beg()\n3.delete_beg()\n4.search()\n5.insert_after()\n6.display()\n7.Reverse the list.\n8.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the value: ");
				scanf("%d",&val);
				head=insert_end(head,val);
				break;
			case 2: printf("Enter the value: ");
				scanf("%d",&val);
				head=insert_beg(head,val);
				break;
			case 3: head=delete_beg(head);
				break;
			case 4: printf("Enter the value: ");
				scanf("%d",&val);
				temp=search(head,val);
				if(temp==NULL)
				{
					printf("Element not found.!\n");
					continue;
				}
				printf("%d found.\n",temp->val);
				break;
			case 5: printf("Enter the value you want to insert: ");
				scanf("%d",&val);
				printf("Enter the value after which you want to insert: ");
				scanf("%d",&afterval);
				head=insert_after(head,val,afterval);
				break;
			case 6: display(head);
				break;
			case 7: head=reverse(head);
				break;
			case 8: exit(0);
			default: printf("Enter proper choice!!!\n");
		}
	}
	return 0;
}
