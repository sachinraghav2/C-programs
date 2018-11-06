#include<stdio.h>
void transpose(int,int);
int main()
{
	int m,n;
	printf("Enter the no of rows and columns: ");
	scanf("%d%d",&m,&n);
	transpose(m,n);
	return 0;
}

void transpose(int m, int n)
{	int a[m][n],temp;
	printf("Enter the elements: ");
	for(int i=0;i<m;i++)
	{	for(int j=0;j<n;j++)
		{	scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{	for(int j=i;j<m;j++)
		{	temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
			
		}	
	}
	for(int i=0;i<n;i++)
	{	for(int j=0;j<m;j++)
		{	printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
}
