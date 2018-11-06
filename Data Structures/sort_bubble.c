#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void bubble_sort(int arr[],int n)
{
	int i,j,flag=0;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				flag=1;
				swap(&arr[j],&arr[j+1]);
			}
		}
		if(flag==0)
			break;
	}
	for(int i=0;i<n;i++)
		printf("%d\n",	arr[i]);
}
int main()
{
	int n;
	printf("Enter the size : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	bubble_sort(arr,n);
	return 0;
}
