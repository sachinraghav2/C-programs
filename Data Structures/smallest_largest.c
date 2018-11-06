#include<stdio.h>
int main()
{
	int smallest, largest, n;
	printf("How many element do you want to have in the array: ");
	scanf("%d",&n);
	int num[n];
	printf("Enter the elements: ");
	for(int i=0;i<n;i++)
		scanf("%d",&num[i]);
	smallest=num[0];
	largest=num[0];
	for(int i=0;i<n;i++)
	{
		if(num[i]<smallest)
			smallest=num[i];
		if(num[i]>largest)
			largest=num[i];
	}
	printf("Smallest number is %d.\nLargest is %d.\n",smallest,largest);
	return 0;
}
