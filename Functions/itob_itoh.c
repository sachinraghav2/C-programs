#include<stdio.h>
void itob(int, char);
void itoh(int, char);
int main()
{
	int n;
	char s;
	printf("Enter the number: ");
	scanf("%d",&n);
	itob(n,s);
	itoh(n,s);
	return 0;
}
void itob(int n, char s)
{	int num[20],i=20;
	printf("Binary equivalent: ");
	while(n>0)
	{	--i;
		num[i]=n%2;
		//printf("%d",num[i]);
		n/=2;
	}
	while (i<20)
	{
		printf("%d",num[i]);
		i++;
	}
	printf("\n");
}
void itoh(int n, char s)
{
	printf("Hexadecimal equivalent: %X\n",n);
}
