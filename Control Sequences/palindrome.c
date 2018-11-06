#include<stdio.h>

int main()
{
	int n,rem, sum=0, temp;
	printf("Enter the number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n/=10;
	}
	if(temp==sum)
		printf("The number is palindrome.\n");
	else
		printf("The number is not palindrome.\n");

	return 0;
}
