#include<stdio.h>
int main()
{
	char a;
	int count=0,b;
	printf("Enter the number: ");
	scanf("%d",&b);
	a=b;
	for(int i=0;i<8;i++)
	{
		count+=(a&1);
		a>>=1;
	}
	printf("The number is set at %d bits.\n",count);
	return 0;
}
