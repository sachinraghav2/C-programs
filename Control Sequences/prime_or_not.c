#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{	count=0;
		for(int j=1;j<=i;j++)
		{
			if((i%j)==0)
			{
				count++;
			}
		}
		if (count==2 && i!=1)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
