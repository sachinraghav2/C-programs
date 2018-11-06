#include<stdio.h>
int main()
{
	int n;
	long int factorial=1;
	printf("Enter the value: ");
	scanf("%d",&n);
	if(n!=0)
	for(int i=n;i>0;i--)
		factorial*=i;
	else
		factorial=1;
	printf("The factorial of %d is: %ld\n",n,factorial);
	return 0;
}

