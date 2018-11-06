void foo(int i)
{
	static int a=2;
	printf("value of internal static variable 'a' in %d run is %d\n",i,a);
	a++;
}
