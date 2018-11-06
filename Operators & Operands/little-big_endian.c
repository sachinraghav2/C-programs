#include<stdio.h>

int main()
{	unsigned int a=1;
	char *p=(char *)&a;
	if(*p)
		printf("Little Endian.\n");
	else
		printf("Big Endian.\n");
	return 0;
}
