#include<stdio.h>

int main()
{
	int i,j,m,n,sum=0,a[6][6],b[6][6],c[6][6],choice;
	printf("enter row and col of 1st matrix:");
	scanf("%d%d",&i,&j);
	printf("enter row and col of 2nd matrix:");
	scanf("%d%d",&m,&n);
	printf("enter 1st matrix:");
	for(int p=0;p<i;p++)
		for(int q=0;q<j;q++)
			scanf("%d",&a[p][q]);
	
	printf("enter 2nd matrix:");
	for(int p=0;p<i;p++)
		for(int q=0;q<j;q++)
			scanf("%d",&b[p][q]);

	printf("Enter operation to be done:\n1. Addition\n2. Subtaction\n3. Multiplication\n");
	scanf("%d",&choice);
	switch(choice)
{	
	case 1 :for(int p=0;p<i;p++)
		{	for(int q=0;q<j;q++)
			{	c[p][q]=a[p][q]+b[p][q];
				printf("%d\t",c[p][q]);
			}
			printf("\n");
		}
		break;
	case 2 :for(int p=0;p<i;p++)
		{	for(int q=0;q<j;q++)
			{	c[p][q]=a[p][q]-b[p][q];
				printf("%d\t",c[p][q]);
			}
			printf("\n");
		}
		break;
	case 3: if(j!=m)
		{	printf("Cannot be multiplied.\n");
		}	
		else
		{
			for(int p=0;p<i;p++)
			{	for(int q=0;q<n;q++)
				{	for(int l=0;l<m;l++)
					{	sum+=(a[p][l]*b[l][q]);
					}
				c[p][q]=sum;
				printf("%d\t",c[p][q]);
				sum=0;
				}
			printf("\n");
			}
		}
		break;
	default : printf("Wrong Choice!!!");
}
	return 0;
}
