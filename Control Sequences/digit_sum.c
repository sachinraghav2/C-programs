#include<stdio.h>
int main()
{
	int n, rem, sum=0,temp;
	printf("Enter the Number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;	
		sum+=rem;
		n/=10;
	}
	printf("Sum of all its digits is: %d\n",sum);
	return 0;
}
