#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,count=0;
	printf("Enter the initial value: ");
	scanf("%d",&num);
	printf("Initial value is %d.\n",num);
	if(num>0)
	{
		if(num==1)
		{
			printf("Final value is %d. Number of steps occured: %d\n",num,count);
			return 0;
		}
		while(num!=2)
		{
			if(num%2==0)
			{
				num/=2;
				printf("Next value is %d.\n",num);
				count++;
			}
			else
			{
				num=num*3+1;
				printf("Next value is %d.\n",num);
				count++;
			}
		}	
		printf("Final value is %d. Number of steps occured: %d\n",num/2,count+1);
	}
	else
	{
		printf("Error.\n");
		exit(0);
	}
	return 0;
}
