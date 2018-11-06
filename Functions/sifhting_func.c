#include<stdio.h>
int rotate(int,int);
int main()
{
	int a,b;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Enter number of bits to be shifted: ");
	scanf("%d",&b);
	printf("After shifting: %d\n",rotate(a,b));
	return 0;
}
int rotate(int a, int b)
{
	a>>=b;
	return a;
}
