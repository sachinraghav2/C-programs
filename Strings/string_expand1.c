#include<stdio.h>
#include<string.h>
void expand(char *,char *);
int main()
{
	char s1[30],s2[30];
	//s2=malloc(sizeof(char)*30);
	printf("Enter the string: ");
	gets(s1);
	//printf("%s\n",s1);
	expand(s1,s2);
	printf("Entered string: %s\nProcessed string is:%s\n",s1,s2);
	return 0;
}
void expand(char *ptr1, char *ptr2)
{
	int n=strlen(ptr1);
	for(int j=0;*(ptr1)!='\0';j++)
	{
		if(*ptr1=='-')
		{
			ptr1-=1;
			ptr2-=1;
			for(int i=1;*ptr2<*(ptr1+2);i++)
			{
				ptr2+=1;
				*ptr2=*ptr1+i;
			}
			ptr1+=2;
		}
		else
		{
			*ptr2=*ptr1;
			ptr1+=1;
			ptr2+=1;
		}
	}
}
