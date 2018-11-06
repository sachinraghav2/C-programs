#include<stdio.h>
#include<string.h>
int any(char *,char *);
char s1[30],s2[10];
int main()
{
	
	int n;
	printf("Enter 1st string: \n");
	gets(s1);
	printf("Enter the string to be searched in 1st string:\n");
	scanf("%s",s2);
	n=any(s1,s2);
	printf("The string is found at %d index.\n",n);
	return 0;
}
int any(char *str1,char *str2)
{
	int i=0,index=0;
	char c[10];
	for(; s2[i]!='\0';i++);
	while(*str1!='\0')
	{	//printf("%s\n",str1);
		int count=0;
		if(*str1==*str2)
		{
			for(int j=0;j<i;j++)
				c[j]=*(str1+j);
		}
		//printf("%s\n",c);
		for(int k=0;*(str2+k)!='\0';k++)
		{
			if(*(str2+k)==c[k])
				count++;
		}
		if (count==i)
			return index;
		str1+=1;
		index++;
	}
	return -1;
}
