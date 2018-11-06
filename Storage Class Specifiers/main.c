#include<stdio.h>
#include "static.c"
#include "register.c"
int b=6;
int main()
{	int d=32;
	printf("b is global variable in main.c with value %d\n",b);
	printf("d is an automatic variable in main.c with value %d \n",d);
	for(int i=0;i<3;i++)
		foo(i);
	reg();
	return 0;
}
