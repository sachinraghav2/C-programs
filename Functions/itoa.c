#include<stdio.h>
void itoa(int);

int main()
{
	int a;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	itoa(a);
	printf("\n");
	return 0;
}

void itoa(int a)
{
	if(a!=0)
	{
		char b;
		b=(a%10)+48;
		itoa(a/10);
		printf("%c",b);
	}
	else
		return;
}
