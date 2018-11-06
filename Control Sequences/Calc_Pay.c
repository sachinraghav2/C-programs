#include<stdio.h>

int main()
{
	int rate;
	float hours;
	printf("Enter the number of hours and rate: ");
	scanf("%f%d", &hours,&rate);
	if(rate!=0)
	{
		if(hours<40)
			printf("Pay at %d pence/hr for %.0f hours is %.2f rupees.\n",rate,hours,rate*hours/100);
		else if(hours>=40 && hours<60)
			printf("Pay at %d pence/hr for %.0f hours is %.2f rupees.\n",rate,hours,rate*1.5*hours/100);
		else
			printf("Pay at %d pence/hr for %.0f hours is %.2f rupees.\n",rate,hours,rate*2*hours/100);
	}
	else
		printf("Cannot calculate Pay for 0 rate.");
	return 0;
}
