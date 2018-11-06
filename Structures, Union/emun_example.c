#include<stdio.h>
enum flag {true,false};
int main()
{
	int numbers[10],val;
	printf("Enter the values:\n");
	for(int i=0;i<10;i++)
		scanf("%d",&numbers[i]);
	printf("Enter value to be searched: \n");
	scanf("%d",&val);
	for(int i=0;i<10;i++)
	{
		if(numbers[i]==val)
		{
			printf("%d(true) at %d position.\n",true,i+1);
			break;
		}
	}
	return 0;
}
