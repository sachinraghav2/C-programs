#include<stdio.h>
int main()
{
	char c;
	FILE * fp=fopen("Source1.txt","r");
	if(fp==NULL)
		printf("Error opening Source1.\n");
	else
	{
		while((c=fgetc(fp))!=EOF)
			printf("%c",c);
	}
	fclose(fp);
	return 0;
}
