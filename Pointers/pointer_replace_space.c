#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int replace(char *);
int main()
{
	char *cat="The cat sat.";
	//printf("%lu\n",sizeof(cat));
	//char *cat=s;
	int n;
	n=replace(cat);
	printf("n=%d\n",n);
	return 0;
}

int replace(char *s)
{	char *c=malloc(sizeof(char)*15);
	strcpy(c,s);
	int count=0,i=0;
	while(*(c+i)!='\0')
	{	
		if(*(c+i)==' ')
		{
			*(c+i)='-';
			count++;
		}
		//printf("%s",c);
		//c=c+1;
		i++;
	}
	printf("\n%s\n",c);
	return count;
}
