#include<stdio.h>
void tolower(char);
int main()
{
	char ch;
	printf("Enter the Alphabet: ");
	scanf("%c",&ch);
	tolower(ch);
	return 0;
}
void tolower(char ch)
{
	if(ch>=65&&ch<=91)
	{	ch=ch+32;
		printf("The lowercase : %c\n",ch);
	}
	else
		printf("The Alphabet is already in lowercase.\n");
}
