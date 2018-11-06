#include<stdio.h>
#include<stdlib.h>
void reverse(char *);
char revstr[20];
char *ptr=&revstr;
int main()
{
	char str[20];
	printf("Enter the string: ");
	gets(str);
	printf("Entered string is: %s\n",str);
	reverse(&str[0]);
	printf("Reversed string is: %s\n",revstr);
	return 0;
}

void reverse(char *ptr1)
{
	if(*(ptr1)!='\0')
	{
		reverse(ptr1+1);
		*ptr=*ptr1;
		ptr+=1;	
	}
	else
	{
		return;
	}
}
