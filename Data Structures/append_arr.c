#include<stdio.h>
int main()
{
	int m,n,temp;
	printf("Enter the size of the sorted arrays: ");
	scanf("%d%d",&m,&n);
	int a1[m],a2[n];
	printf("Enter 1st sorted array: ");
	for(int i=0;i<m;i++)
		scanf("%d",&a1[i]);
	printf("Enter 2nd sorted array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a2[i]);
	int b[m+n];
	for(int i=0;i<m;i++)
		b[i]=a1[i];
	for(int i=0;i<m+n;i++)
		b[i+m]=a2[i];
	for(int i=0;i<m+n;i++)
	{
		for(int j=i+1;j<m+n;j++)
		{
			if(b[j]<b[i])
			{
				temp=b[i];
				b[i]=b[j];	
				b[j]=temp;
			}
		}
	}
	printf("Merged and sorted array :\n");
	for(int i=0;i<m+n;i++)
		printf("%d\n",b[i]);
	return 0;
}
