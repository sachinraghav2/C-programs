#include<stdio.h>
#include<stdlib.h>
#define MAXIMUM 20
typedef struct queue{
	int capacity,front,rear,size, *array;
	}myqueue;

void makeEmpty(myqueue *q)
{
	q->front=1;
	q->rear=0;
	q->size=0;
}
myqueue *createQueue(int max)
{
	myqueue *q=(myqueue *)malloc(sizeof(myqueue));
	q->array=(int *)malloc(sizeof(int)*max);
	q->capacity=max;
	makeEmpty(q);
	return q;
}
int isEmpty(myqueue *q)
{
	return q->size==0;
}
int isFull(myqueue *q)
{
	return q->size==q->capacity-1;
}
void enqueue(myqueue *q,int val)
{
	if(isFull(q))
		printf("The Queue is full!\n");
	else
	{
		q->size++;
		q->rear++;
		if(q->rear==q->capacity-1)
			q->rear=0;
		q->array[q->rear]=val;
	}
}
void dequeue(myqueue *q)
{
	if(isEmpty(q))
		printf("Stack is already empty.\n");
	else
	{
		q->size--;
		q->front++;
		if(q->front==q->capacity-1)
			q->front=0;
	}
}
void display_queue(myqueue *q)
{
	int fend=q->front,rend=q->rear;
	if(isEmpty(q))
		printf("The Queue is empty!\n");
	else
	{
		if(rend<fend)
		{
			while(fend!=MAXIMUM)
			{
				printf("%d\n",q->array[fend]);
				fend++;
			}
			fend=0;
			while(fend!=rend+1)
			{
				printf("%d\n",q->array[fend]);
				fend++;
			}
		}
		else
		{
			while(fend!=rend+1)
			{
				printf("%d\n",q->array[fend]);
				fend++;
			}
		}
	}
}
int main()
{
	myqueue *mq;
	mq=createQueue(MAXIMUM);
	int ch,val;
	while(1)
	{
		printf("Choose:\n1.Enqueue.\n2.Dequeue\n3.Display\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the value: ");
				scanf("%d",&val);
				enqueue(mq,val);
				break;
			case 2: dequeue(mq);
				break;
			case 3: display_queue(mq);
				break;
			case 4: exit(0);
			default: printf("Enter proper choice!!!\n");
		}
	}
	return 0;
}
