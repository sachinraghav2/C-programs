#include<stdio.h>
#include<stdlib.h>
void remove_single_line_cmmnts();
void remove_multi_line_cmmnts();
int main()
{
	printf("Executing the program.\n");
	remove_single_line_cmmnts();
	remove_multi_line_cmmnts();
	return 0;
}
void remove_single_line_cmmnts()
{
	char c;
	FILE * fp=fopen("sample.c","r+");
	if(fp==NULL)
	{
		printf("Error opening the file!\n");
		exit(0);
	}
	else
	{
		while((c=fgetc(fp))!=EOF)
		{
			if(c=='/')
			{
				c=fgetc(fp);
				if(c=='/')
				{
					fseek(fp,ftell(fp)-2,SEEK_SET);
					while(c=fgetc(fp)!='\n')
					{
						fseek(fp,ftell(fp)-1,SEEK_SET);
						fputc(' ',fp);
					}
					
				}
			}
		}
	}
	rewind(fp);
	while((c=fgetc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
void remove_multi_line_cmmnts()
{
char c;
	FILE * fp=fopen("sample.c","r+");
	if(fp==NULL)
	{
		printf("Error opening the file!\n");
		exit(0);
	}
	else
	{
		while((c=fgetc(fp))!=EOF)
		{
			if(c=='/')
			{
				c=fgetc(fp);
				if(c=='*')
				{
					fseek(fp,ftell(fp)-2,SEEK_SET);
					for(int i=0;i<2;i++)
							fputc(' ',fp);
					while((c=fgetc(fp))!='*')
					{
						fseek(fp,ftell(fp)-1,SEEK_SET);
						fputc(' ',fp);
					}
					if((c=fgetc(fp))=='/')
					{
						fseek(fp,ftell(fp)-2,SEEK_SET);
						for(int i=0;i<2;i++)
							fputc(' ',fp);
					}
					
				}
			}
		}
	}
	rewind(fp);
	while((c=fgetc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
