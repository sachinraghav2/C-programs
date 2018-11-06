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
void B_search(mynode *head, int val)
{
	int i=0;mynode *temp=head;
	if(head==NULL)
	{
		printf("List is Empty.\n");
		return ;
	}
	while(temp!=NULL)
	{
		temp=temp->next;
		i++;
	}
	
	int arr[i+1],k=i;
	for(int j=1;head!=NULL;j++)
	{
		arr[j]=head->val;
		head=head->next;
	}
	while((i!=0)&&(i!=k-1))
	{
		//printf("%d\n",i);
		if(arr[i]!=val)
		{
			if(arr[i]>val)
				i/=2;
			else
				i=(i+k)/2;
		}
		else
		{
			printf("Element %d found at %d position.\n",val,i);
			break;
		}
	}
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
	mynode *head;
	head=NULL;
	while(1)
	{
		printf("Choose:\n1.insert_beg(sorted elements only).\n2.delete_beg().\n3.Display().\n4.Binary Search an element.\n5.exit\n");
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
			case 4: printf("Enter the value: ");
				scanf("%d",&val);
				B_search(head,val);
				printf("\n");
				break;
			case 5: exit(0);
			default: printf("Enter proper choice!!!\n");
		}
	}
	return 0;
}
