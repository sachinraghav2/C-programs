#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	short int n,count;
	srand(time(0));
	n=rand();
	while(1)
	{
		if(n<0)
			n=rand();
		else
			break;
	}
	printf("%d\t",n);
	for(int i=n;i>0;i--)
	{	count=0;
		for(short int j=1;j<=i;j++)
		{
			if((i%j)==0)
			{
				count++;
			}
		}
		if (count==2)
		{
			printf("%d\n",i);
			break;
		}
	}
	printf("\n");
	return 0;
}
