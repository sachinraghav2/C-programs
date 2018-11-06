#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	short int n,i,choice,count;
	srand(time(0));
	printf("Press respective to generate:\n1.Any random number.\n2.A prime number.\n3.Two relatively prime number.\n");
	scanf("%hu",&choice);
	n=rand();
		while(1)
		{
			if(n<0)
				n=rand();
			else
				break;
		}
//printf("%d\t",n);
	switch(choice){
	case 1: 
		printf("%d\n",n);
		break;

	case 2:
		while(1)
		{	count=0;
			for(i=1;i<=n;i++)
			{
				if((n%i)==0)
					count++;
			}
			if(count==2)
			{
				printf("%d\n",n);
				break;
			}
			n++;
		}
		break;
	case 3:	printf("%d\t",n);
		i=n;
		while(1)
		{	count=0;
			for(int j=1;j<=i;j++)
			{
				if((i%j)==0)
					count++;
			}
			if(count==2)
			{
				printf("%d\n",i);
				break;
			}			
			i++;
		}
		break;
	default:	printf("Wrong Choice!!!");
	}
return 0;
}
