#include<stdio.h>

int main()
{
	int row;
	printf("Enter number of rows: ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++)
	{	for(int j=1; j<=row-i;j++)
			printf(" ");
		for( int k=i;k>=1;k--)
			printf("%d",k);
		for(int l=2;l<=i;l++)
			printf("%d",l);
		for(int j=1; j<=row-i;j++)
			printf(" ");
	printf("\n");
	}
	return 0;
}
