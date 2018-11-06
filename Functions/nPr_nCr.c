#include<stdio.h>
float fact(float);
int main()
{
	float n,r;
	printf("Enter the value of n & r (for nPr & nCr): ");
	scanf("%f%f",&n,&r);
	printf("nPr for given value is %f\n",fact(n)/fact(n-r));
	printf("nCr for given values is %f\n",fact(n)/(fact(r)*fact(n-r)));
	return 0;
}

float fact(float n)
{
	if(n<2)
		return 1;
	else
		return n*fact(n-1);
}
