#include<stdio.h>
#include<stdlib.h>
void expand(char *,char *);
int main()
{
	char s[30],t[30];
	printf("Enter the string: ");
	gets(s);
	//printf("Entered string: %s\n",s);
	expand(s,t);
	printf("Entered string: %s\nProcessed string: %s\n",s,t);
	return 0;
}
void expand(char *s, char *t)
{
	while(*s!='\0')
	{
		if(*s=='\n')
		{
			*t='\\';
			t++;
			*t='n';
			//printf("%c\n",*t);
		}
		else if(*s=='\t')
		{
			*t='\\';
			t++;
			*t='t';
		}	
		else
		{
			*t=*s;
			//printf("%c\n",*t);
		}
		if(*(s+1)=='\0')
			*(t+1)=*(s+1);		
		s+=1;
		t+=1;
	}
}
