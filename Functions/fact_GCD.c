#include<stdio.h>
int fact(int);
void GCD(int);
int n, a,count=0;
int main()
{
	int choice, i=1;
	printf("Enter value of n & a: ");
	scanf("%d%d",&n,&a);
	printf("Press\n1.Calculate factorial.\n2.Calculate GCD.\n");
	scanf("%d",&choice);
	GCD(i);
	if(choice==1)
		printf("Factorial of %d & %d is: %d & %d\n",n,a,fact(n),fact(a));
	else
		printf("GCD of %d & %d is: %d\n",n,a,count);
	return 0;
}
int fact(int n)
{
	if(n<2)
		return 1;
	else
		return n*fact(n-1);
}
void GCD(int i)
{
	if(i<=n&&i<=a)
	{
		if((n%i==0)&&(a%i==0))
		{
			count=i;
			GCD(i+1);
		}
		else
		{
			GCD(i+1);
		}
	}
	else
		;
}
