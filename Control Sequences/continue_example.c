#include<stdio.h>

int main()
{	long int n,sum=0;
	printf("Enter the value of n: ");
	scanf("%ld",&n);
	for(int i=0;i<=n;i++)
	{
		
     			if((i%5)==0)
			continue;
			sum+=i;
	
	}
	printf("Sum upto n (without including multiples of 5) is: %ld\n",sum);
	return 0;
}
