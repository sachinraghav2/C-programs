#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void mystrrev(char *);
void mystrcpy(char *,char *);
char * mystrcat(char *,char *);
int mystrcmp(char *,char *);
int main()
{
	char *s1=malloc(sizeof(char)*30),*s2=malloc(sizeof(char)*30);
	char *s3=malloc(sizeof(char)*60);
	int ch,cmp;;
	printf("Enter string 1: ");
	gets(s1);
	printf("Press:\n1.strrev\n2.strcpy\n3.strcat\n4.strcmp\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		mystrrev(s1);
		printf("Reversed string: %s\n",s1);
		break;
	case 2:
		strcpy(s2,s1);
		printf("Copied string: %s\n",s2);
		break;
	case 3:
		
		s3=mystrcat(s1,s2);
		printf("Concatenated: %s\n",s3);
		break;
	case 4:
		
		if(mystrcmp(s1,s2)==0)
			printf("Strings are same.\n");
		else
			printf("Strings are not same.\n");
		break;
	default: printf("Wrong choice!!!\n");
		
	//printf("Enter string 2:");
	//gets(s2);
	//strcat(s1,s2);
	//int i=strcmp(s1,s2);
	//printf("i is %d",i);
	}
	return 0;
}
void mystrrev(char *s1)
{
	int n=strlen(s1);
	//printf("string 1 is %s\n",s1);
	//printf("%d\n",n);
	char *s2=malloc(sizeof(char)*n);
	for(int i=n-1,j=0;*(s1+i)!='\0';i--,j++)
		*(s2+j)=*(s1+i);
	//printf("s2 %s\n",s2);
	for(int i=0;i<n;i++)
		*(s1+i)=*(s2+i);
	
}
void mystrcpy(char *s2,char *s1)
{
	while(*s1!='\0')
	{
		*s2=*s1;
		s1+=1;
		s2+=1;
	}
}
char *mystrcat(char *s1,char *s2)
{
	printf("Enter 2nd string: ");
	scanf("%s",s2);
	char *s3=malloc(sizeof(char)*60);
	int i=0;
	for(int j=0;*(s1+i)!='\0';i++,j++)
		*(s3+i)=*(s1+j);
	for(int j=0;*(s2+j)!='\0';i++,j++)
		*(s3+i)=*(s2+j);
	return s3;
}
int mystrcmp(char *s1,char *s2)
{
	printf("Enter 2nd string: ");
		scanf("%s",s2);
	int len1=0,len2=0;
	for(int i=0;*(s1+i)!='\0';i++)
		len1++;
	for(int i=0;*(s2+i)!='\0';i++)
		len2++;
	if(len1!=len2)
		return -1;
	else
	{
		for(int i=0;*(s1+i)!='\0';i++)
		{
			if(*(s1+i)!=*(s2+i))
				return -1;
		}
		return 0;
	}
}
