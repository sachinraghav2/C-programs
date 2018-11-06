#include<stdio.h>

int main()
{
	float p,r,t;
	printf("Enter the principle, interest rate and time: ");
	scanf("%f%f%f",&p,&r,&t);
	printf("Simple interest : %.2f\n",(p*r*t)/100);
	return 0;
}
