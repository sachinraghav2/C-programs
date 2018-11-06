#include<stdio.h>
#include<string.h>
char *revptr;
void PrintReverse(char *);
int main()
{
	char str[20],revstr[20];
	printf("Enter the string: ");
	gets(str);
	//printf("Entered string: %c\n",*str);
	//printf("Entered string: %s\n",ptr);
	revptr=revstr;
	PrintReverse(str);
	*revptr='\0';
	printf("Reversed String: %s\n",revstr);
	return 0;
}
void PrintReverse(char *ptr)
{
	static int i=0;
	if(*ptr!='\0')
	{
		PrintReverse(ptr+1);
		*revptr=*ptr;
		revptr+=1;
		//printf("%c\n",*revptr);
		return;
	}
	else
		return;
}
