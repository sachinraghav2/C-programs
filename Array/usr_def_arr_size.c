#include<stdio.h>

int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int array[n];
	printf("Enter the %d numbers: ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Entered numbers are: ");
	for(int i=0;i<n;i++)
		printf("%d\t",array[i]);
	printf("\n");
	return 0;
}
