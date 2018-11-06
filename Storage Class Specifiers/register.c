void reg()
{	extern int b;
	register int i=10;
	printf("Value of i as register integer is:%d\n",i);
	printf("Value of b (extern variable) is printed now in register.c:%d\n",b);
}
