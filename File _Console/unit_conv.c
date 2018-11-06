#include<stdio.h>
int main()
{
	float num,inches;
	int feet;
	printf("Enter a value in cms: ");
	scanf("%f",&num);
	feet=num/(12*2.54);
	inches=(num/2.54)-(feet*12);
	printf("%.1f cms is %d feet and %.1f inches.\n",num,feet,inches);
	return 0;
}
