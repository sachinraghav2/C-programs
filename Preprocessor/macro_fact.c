#include<stdio.h>
#define FACT(n)	((n)<=1?1: \
		(n)==2?2: \
		(n)==3?6: \
		(n)==4?24: \
		(n)==5?120: \
		(n)==6?720: \
		(n)==8?40320: \
		(n)==9?362880: \
		(n)==10?3628800: \
		(n)==11?3916800: \
		(n)==12?479001600: 0 )
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	n=FACT(n);
	printf("%d\n",n);
	return 0;
}
