#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *strtok1(char *, const char);
char *str;
int main()
{
	str=malloc(sizeof(char)*30);
	char *token;
	printf("Enter the string: ");
	gets(str);
	do
	{
		token=strtok1(str,'-');
		printf("%s\n",token);
	}while(token!=NULL);
	return 0;
}
char *strtok1(char *ptr, const char delim)
{
	int i=0;
	char *token;
	for(;(*(ptr+i)!='\0')&&(*(ptr+i)!=delim);i++)
	if(*(ptr+i)=='\0')
		return NULL;
	else
	{
		*(ptr+i)=0;
		token=ptr;
		str=ptr+i+1;
		return token;
	}
}		
/*	printf("%c\n",*str);
	if(*str!='\0')	
	{
		char *token=malloc(sizeof(char)*10);
		char temp[30];
		int j=0;
		for(;(*(str+j)!=delim)&&(*(str+j)!='\0');j++);
		printf("j is %d\n",j);
		if(*(str+j)=='\0')
			return NULL;
		printf("j is %d\n",j);
		for(int i=0;i<j;i++)
		{
			*(token+1)=(*(str+i));
			printf("%c\n",token[i]);
		}
		//str=str+1;
		printf("%s\n",token);
		strcpy(temp,(str+j+1));
		for(int i=0;temp[i]!='\0';i++)
		{
			*str=temp[i];
			str=str+1;
		}
		return token;
	}
	else
		return NULL;
}*/
