#include<stdio.h>
float fact(float n)
{
	if (n<2)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	int val;
	printf("Enter a value: ");
	scanf("%d",&val);
	if(val<=3)
	{
		printf("The value is less than or equal to 3, thus all purmutations are:\n");
		for(int i=3; i>=1;i--)
		{
			printf("For %d\n",i);
			for(int j=i;j>=1;j--)
				printf("With r=%d, %.2f\n",j,fact(i)/fact(i-j));
		}
	}
	else
	{
		printf("All purmutations are:\n");
		for(int i=val; i>=val-2;i--)
		{
			printf("For %d\n",i);
			for(int j=i;j>=1;j--)
				printf("With r=%d, %.2f\n",j,fact(i)/fact(i-j));
		}
	}
	return 0;
}
