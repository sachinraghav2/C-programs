#include<stdio.h>
#include<string.h>
void is_palindrome(char str[])
{
	int count=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==str[strlen(str)-i-1])
			count++;
		else
			;
	}
	if(count==strlen(str))
		printf("String is palindrome.\n");
	else
		printf("String is not palindrome.\n");
}
int main()
{
	char str[30];
	printf("Enter the string: ");
	gets(str);
	is_palindrome(str);
	return 0;
}
