#include<stdio.h>
struct number{
	unsigned int b:16;
	};
void decequi(int a)
{
	short int num[16],temp=a;
	for(int i=15;i>=0;i--)
	{
		num[i]=(a&1);
		a>>=1;
	}
	printf("Binary equivalent: ");
	for(int i=0;i<16;i++)
		printf("%d",num[i]);
	printf("\n");
	printf("HEX equivalent: %X\n",temp);
}
int main()
{
	struct number num;
	short int d;
	unsigned int a=0xa2c3;
	num.b=a;
	decequi(num.b);
	d=~a;
	printf("~a is %d\n",d);
	decequi(d);
	d=a^0x3f06;
	printf("a^0x3f06 is %d\n",d);
	decequi(d);
	d=a|0x3f06;
	printf("a|0x3f06 is %d\n",d);
	decequi(d);
	d=a|~0x3f06;
	printf("a|~0x3f06 is %d\n",d);
	decequi(d);
	d=a>>3;
	printf("a>>3 is %d\n",d);
	decequi(d);
	d=a>>5;
	printf("a>>5 is %d\n",d);
	decequi(d);
	d=a^~a;
	printf("a^~a is %d\n",d);
	decequi(d);
	d=a|~a;
	printf("a|~a is %d\n",d);
	decequi(d);
	d=(a&0x3f06)<<8;
	printf("(a&0x3f06)<<8 is %d\n",d);
	decequi(d);
	d=a&~(0x3f06>>8);
	printf("a&~(0x3f06>>8) is %d\n",d);
	decequi(d);
	return 0;
}
