#include<stdio.h>
int fact(int);
int main()
{
	int n,r;
	printf("Enter the value of n & r: ");
	scanf("%d%d",&n,&r);
	printf("Value of %d!/(%d-%d)! is %d/%d\n",n,n,r,fact(n),fact(n-r));
	return 0;
}

int fact(int n)
{
	if(n==1||n==0)
		return 1;
	else
		return n*fact(n-1);
}
