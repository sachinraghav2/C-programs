#include<stdio.h>
#include<stdlib.h>
typedef struct queueRecord{
	int val;
	struct queueRecord *next;
	}myqueue;
myqueue *enqueue(myqueue *rear,int val,int *ptr)
{
	myqueue *temp=malloc(sizeof(myqueue));
	temp->val=val;
	temp->next=NULL;
	if(rear==NULL)
	{
		rear=temp;
		*ptr=1;
		return rear;
	}
	rear->next=temp;
	rear=temp;
	*ptr=0;
	return rear;
}
myqueue *dequeue(myqueue *front)
{
	myqueue *temp=front;
	if(front==NULL)
	{
		printf("The Queue is already empty.\n");
		return front;
	}
	front=front->next;
	free(temp);
	return front;
}
void display_queue(myqueue *front)
{	printf("\n");
	if(front==NULL)
	{
		printf("Queue is empty.\n");
		return;
	}
	while(front!=NULL)
	{
		printf("%d\n",front->val);
		front=front->next;
	}	
	printf("\n");
}
int main()
{
	myqueue *front,*rear;
	front=NULL,rear=NULL;
	int ch,val,flag=0,*ptr;
	ptr=&flag;
	while(1)
	{
		printf("\n");
		printf("Choose:\n1.Enqueue().\n2.Dequeue()\n3.display_queue()\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the value: ");
				scanf("%d",&val);
				rear=enqueue(rear,val,ptr);
				if(*ptr!=0)
					front=rear;
				break;
			case 2: front=dequeue(front);
				if(front==NULL)
					rear=front;
				break;
			case 3: display_queue(front);
				break;
			case 4: exit(0);
			default: printf("Enter proper choice!!!\n");
		}
	}
	return 0;
}
