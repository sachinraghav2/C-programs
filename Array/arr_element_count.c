#include<stdio.h>
#include<ctype.h>
int main()
{
	char text[80];
	int alphabets=0,blanks=0,digits=0,tabs=0,i;
	printf("Enter the text: ");
	scanf("%[^\n]s",text);
//printf("%s\n",text);
	for(i=0;text[i]!='\0';i++)
	{
		if(isdigit(text[i])!=0)
			digits++;
		else if(text[i]==' ')
			blanks++;
		else if(isalpha(text[i])!=0)
			alphabets++;
		else if(text[i]=='\t')
			tabs++;
		else
			;			
	}
	printf("%d Alphabets, %d Digits, %d Blanks, %d Tab Characters.\n",alphabets,digits,blanks,tabs);
	return 0;
}
