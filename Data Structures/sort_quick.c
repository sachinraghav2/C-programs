#include<stdio.h>
void q_sort(int arr[],int left,int right)
{
	if(left<right)
	{
		int pivot=arr[right],temp;
		int i=left,j=left+1;
		for(;j<right;j++)
		{
			if(arr[j]<pivot)
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				i++;
			}
		}
		if(pivot<arr[i])
		{
			temp=arr[i];
			arr[i]=arr[right];
			arr[right]=temp;
		}
		q_sort(arr,left,i);
		q_sort(arr,i+1,right);
	}
	else
	{
		return;
	}
}
void quick_sort(int arr[],int n)
{
	q_sort(arr,0,n-1);
}

	
int main()
{
	int n;
	printf("Enter the sizeof array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	quick_sort(arr,n);
	printf("\n\n");
	for(int i=0;i<n;i++)
		printf("%d\n",arr[i]);
	return 0;
}
