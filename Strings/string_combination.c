#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *str=malloc(sizeof(char)*15);
	printf("Enter the string: ");
	gets(str);
	printf("Enteres string: ");
	puts(str);
	printf("\nAll combinations:\n");
	for(int j=0;*str!='\0';j++)
	{
		printf("%s",str);
		for(int i=j;i>0;i--)
			printf("%c",*(str-i));
		str+=1;
		printf("\t");
	}
	printf("\n");
	return 0;
}
