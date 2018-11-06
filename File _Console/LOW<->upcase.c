#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n;char ch;
	FILE * fp=fopen("data.txt","r+");
	if(fp==NULL)
		printf("Error in opening file.");
	else
	{
	printf("Enter how many character: ");
	scanf("%d",&n);
	char *c;
	printf("Enter characters: ");
	//for(int i=0;i<n;i++)
		scanf("%s",c);
	for(int i=0;i<n;i++)
		printf("%c",c[i]);
	printf("\n");
	
	
	
		for(int i=0;i<n;i++)
		{
			if(c[i]>=65&&c[i]<=91)
			{
				printf("%c is UPPERCASE.\n",c[i]);
				fputc(c[i]+32,fp);
			}
			else if(c[i]>=97&&c[i]<123)
			{
				printf("%c is LOWERCASE.\n",c[i]);
				fputc(c[i]-32,fp);
			}
			else
				fputc(c[i],fp);
		}
	}
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	printf("\n");
	return 0;
}
