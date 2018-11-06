#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n;
	printf("Enter the number of strings you want to enter: ");
	scanf("%d",&n);
	char *ptr[n];
	for(int i=0;i<n;i++)
	{
		ptr[i]=malloc(sizeof(char)*20);
		printf("Enter %d string: ",i+1);
		scanf("%s",ptr[i]);
	}
	printf("Entered strings are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%s\n",ptr[i]);
	}
	return 0;
}
