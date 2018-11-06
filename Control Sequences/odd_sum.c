#include<stdio.h>

int main()
{
	int n,i=0, sum=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if((i%2)==0)
		{	
			i++;
			continue;
		}
		sum+=i;
		i++;
	}
	printf("Sum of all odd numbers upto %d is: %d\n",n,sum);
	return 0;
}
