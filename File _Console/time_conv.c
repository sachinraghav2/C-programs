#include<stdio.h>
int main()
{
	int input,hrs,min,sec;
	printf("Enter the time in second: ");
	scanf("%d",&input);
	printf("%d is ",input);
	sec=input-((input/60)*60);
	input/=60;
	min=input-((input/60)*60);
	hrs=(input/60);
	printf(" seconds is equivalent to %d hours %d minutes %d seconds.\n",hrs,min,sec);
	return 0;
}
