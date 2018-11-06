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
		sum+=(rem*rem*rem*rem);
		n/=10;
	}
	if(sum==temp)
		printf("Number is Armstrong.\n");
	else
		printf("Number is not Armstrong.\n");
	return 0;
}
