#include<stdio.h>
#include<stdlib.h>
void swap(int *p1,int *p2)
{
	int *temp;
	temp=p1;
	p1=p2;
	p2=temp;
	printf("In swap() contents are: p1 %p\tp2 %p\n",p1,p2);
}
int main()
{
	int *p1=malloc(sizeof(int)*5),*p2=malloc(sizeof(int)*5);
	printf("In main contents before swap are: p1%p\tp2 %p\n",p1,p2);
	swap(p1,p2);
	printf("In main contents after swap are: p1%p\tp2 %p\n",p1,p2);
	return 0;
}
