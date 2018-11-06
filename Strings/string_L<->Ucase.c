#include<stdio.h>
int main()
{
	char string[20];
	printf("Enter the String: ");
	scanf("%s",string);
	for(int i=0;string[i]!='\0';i++)
	{
		if(string[i]<=91)
		{
			string[i]+=32;
		}
	}
	printf("String in LOWERCASE is: %s\n",string);
	for(int i=0;string[i]!='\0';i++)
	{
		if(string[i]>=97)
		{
			string[i]-=32;
		}
	}
	printf("String in UPPERCASE is: %s\n",string);
	return 0;
}
