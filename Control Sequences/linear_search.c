#include<stdio.h>

int main()
{
	int array[10],a;
	printf("Enter upto 10 elements");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&a);
	for(int i=0;i<10;i++)
	{
		if(a==array[i])
		{	printf("Element found at %dth position.\n",i+1);
			break;
		}
	}
	return 0;
}
