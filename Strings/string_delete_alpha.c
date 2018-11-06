#include<stdio.h>
void delete(char *,char);
int main()
{
	char s[50],c;
	printf("Enter the string: ");
	gets(s);
	printf("Enter the character ti be deleted: ");
	scanf("%c",&c);
	delete(s,c);
	printf("The processed string : %s\n",s);
	return 0;
}
void delete(char *ptr,char c)
{
	while(*ptr!='\0')
	{
		if(*ptr==c)
			for(int i=0;*(ptr+i)!='\0';i++)
				*(ptr+i)=*(ptr+1+i);
		ptr+=1;
	}
}
