#include<stdio.h>
#define PRINT(k) printf("%d is %d\n",k,2*k);
#define PRINTK(k) printf(#k" is %d\n",k);
#define PRINTI(i,j) printf("Val is %d\n",i##j);
int main()
{
	int k=90,i2=47;
	PRINT(k)
	PRINTK(i2)
	PRINTI(i,2)
	return 0;
}
