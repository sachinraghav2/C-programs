#include<stdio.h>
#include<stdlib.h>
int order[3];
typedef struct node{
	int val;
	struct node *next;
	}mynode;

mynode *insert_beg(mynode *head, int order)
{
	int coeff;
	for(int i=0;i<=order;i++)
	{
		printf("Enter %dth power coefficient: ",i);
		scanf("%d",&coeff);
		mynode *temp=malloc(sizeof(mynode));
		temp->val=coeff;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			continue;
		}
		temp->next=head;
		head=temp;
	}
	return head;	
}
	
void display(mynode *head,int order)
{

	printf("\n");
	if(head==NULL)
	{
		printf("List is empty.\n");
		return;
	}
	while(head!=NULL)
	{
		printf(" (%d)(x^%d)  ",head->val,order);
		head=head->next;
		order--;
	}	
	printf("\n");
}
mynode *add_poly(mynode *P1,mynode *P2)
{
	mynode *head3,*temp3;
	int i,j;
	i=order[1],j=order[2],order[0]=(i>j?i:j);
	if(i>j)
	{
		for(int k=0;k<i-j;k++)
		{
			mynode *temp=malloc(sizeof(mynode));
			temp->val=P1->val;
			temp->next=NULL;
			if(k==0)
			{
				temp3=temp;
				head3=temp;
			}
			else
				temp3->next=temp;
			temp3=temp;
			P1=P1->next;
		}
		while(P1!=NULL)
		{
			mynode *temp=malloc(sizeof(mynode));
			temp->val=P1->val+P2->val;
			temp->next=NULL;
			temp3->next=temp;
			temp3=temp;
			P1=P1->next;
			P2=P2->next;
		}
	}
	else if(i<j)
	{
		for(int k=0;k<j-i;k++)
		{
			mynode *temp=malloc(sizeof(mynode));
			temp->val=P2->val;
			temp->next=NULL;
			if(k==0)
			{
				temp3=temp;
				head3=temp;
			}
			else
				temp3->next=temp;
			temp3=temp;
			P2=P2->next;
		}
		while(P1!=NULL)
		{
			mynode *temp=malloc(sizeof(mynode));
			temp->val=P1->val+P2->val;
			temp->next=NULL;
			temp3->next=temp;
			temp3=temp;
			P1=P1->next;
			P2=P2->next;
		}
	}
	else
	{
		for(int k=0;k<=j;k++)
		{
			mynode *temp=malloc(sizeof(mynode));
			temp->val=P1->val+P1->val;
			temp->next=NULL;
			if(k==0)
			{
				temp3=temp;
				head3=temp;
			}
			else
			{
				while(temp3->next!=NULL)
					temp3=temp3->next;
				temp3->next=temp;
			}
			P1=P1->next;
			P2=P2->next;
		}
	}
	return head3;
}
	
int main()
{
	int ch,afterval;
	mynode *P1,*P2,*P3;
	P1=NULL,P2=NULL,P3=NULL;
	while(1)
	{
		printf("\n");
		printf("Choose:\n1.Insert polynomial P1 & P2.\n2.display P1 & P2 & P3.\n3.Add P1 & P2.\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Order of polynomial P1: ");
				scanf("%d",&order[1]);
				P1=insert_beg(P1,order[1]);
				printf("Order of polynomial P2: ");
				scanf("%d",&order[2]);
				P2=insert_beg(P2,order[2]);
				break;
			case 2: printf("P1:\n");
				display(P1,order[1]);
				printf("\nP2:\n");
				display(P2,order[2]);
				printf("\nP3:\n");
				display(P3,order[0]);
				break;	
			case 3: P3=add_poly(P1,P2);
				break;
			case 4: exit(0);
			default: printf("Enter proper choice!!!\n");
		}
	}
	return 0;
}
