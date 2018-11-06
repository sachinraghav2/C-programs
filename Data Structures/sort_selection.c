#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void selection_sort(int arr[],int n)
{
	int imin;
	for(int i=0;i<n-1;i++)
	{
		imin=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[imin])
				imin=j;
		}
		if(i!=imin)
			swap(&arr[i],&arr[imin]);
	}
	for(int i=0;i<n;i++)
		printf("%d\n",	arr[i]);
}
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	selection_sort(arr,n);
	return 0;
}
