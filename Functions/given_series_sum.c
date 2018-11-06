#include<stdio.h>
float fact(float);
int main()
{
	float sum=0;
	for(int i=1;i<=7;i++)
	{
		if(i==1)
			sum+=1;
		else
			sum+=(i/fact(i));
		
	}
	printf("The sum of the first seven terms of the series is: %f\n",sum);
	return 0;
}

float fact(float n)
{
	if (n==1||n==0)
		return 1;
	else
		return n*fact(n-1);
}
