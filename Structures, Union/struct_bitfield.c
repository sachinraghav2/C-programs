#include<stdio.h>
struct new{
	unsigned a : 6;//Largest value a can hold is ((2^6)-1)= 63, range is: 0-63
	unsigned b : 4;//Largest value b can hold is ((2^4)-1)= 15, range is: 0-15
	unsigned c : 6;//Largest value c can hold is ((2^6)-1)= 63, range is: 0-63
};
int main()
{
	struct new n={3,5,7};
	printf("Values in structure: \t%d\t%d\t%d\n",n.a,n.b,n.c);
	return 0;
}
