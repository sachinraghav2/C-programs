#include<stdio.h>
#include<string.h>
int indexr(char [],char);
int main()
{
	char s[20],t;
	printf("Enter the string: ");
	gets(s);
	printf("Enter the character to be searched: ");
	scanf("%c",&t);
	printf("%c is found at %d position.\n",t,indexr(s,t));
	return 0;
}

int indexr(char s[],char t)
{	int position;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==t)
			position=i;
	}
	return position+1;
}
