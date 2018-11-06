#include<stdio.h>
int main()
{
	printf("Enter two numbers: ");
	int a,b;
	scanf("%d%d", &a,&b);
	printf("Biggest number of them is:%d\n",(a>b)?a:b);
		
return 0;
}
