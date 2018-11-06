#include<stdio.h>
void merge(int arr[], int l,int m,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=arr[l+i];
	for(j=0;j<n2;j++)
		R[j]=arr[m+1+j];
	i=0;j=0;k=l;
	while(i<n1&&j<n2)
	{
		if (L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=L[i];
		i++;k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		j++;k++;
	}
}
void merge_sort(int arr[],int left,int right)
{
	int center;
	if(left<right)
	{
		center=(left+right)/2;
		merge_sort(arr,left,center);
		merge_sort(arr,center+1,right);
		merge(arr,left,center,right);
	}
}
void print_array(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	printf("\n");
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
	merge_sort(arr,0,n-1);
	printf("\nSorted array :\n");
	print_array(arr,n);
	return 0;
}
