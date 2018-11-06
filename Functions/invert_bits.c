#include<stdio.h>
void invertponwards(int,int,int);
int nb=0;
long int num[10];
int main()
{
	int n,p,b;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("\nEnter from which bit & upto how many bits the number should be inverted: ");
	scanf("%d%d",&p,&b);
	invertponwards(n,p,b);
	printf("\n");
	return 0;
}

void invertponwards(int n, int p, int b)
{	int num[20],j,i=20,k;
	printf("Binary equivalent of %d: ",n);
	while(n>0)
	{	--i;
		num[i]=n%2;
		//printf("%d",num[i]);
		n/=2;
	}
	j=i,k=i;
	printf("\n");
	for(;k<20;k++)
		printf("%d",num[k]);
	printf("\n");
	printf("The binary number inverted from %d position upto %d bits is:\n",p,b);
	for(;i<20;i++)
	{
		if((i>=j+p-1)&&(i<j+b+1))
			num[i]=!num[i];
		printf("%d",num[i]);
	}
}
