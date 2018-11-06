#include<stdio.h>
#include<string.h>
int main(int argv, char *argc[])
{
	FILE *fp=fopen(argc[1],"r");
	int count=0;
	char c, ch[5];
	if(fp==NULL)
	{
		printf("Error opening file!\n");
		return -1;
	}
	else
	{
		while((c=fgetc(fp))!=EOF)
		{
			printf("%c",c);
			while((count!=19)&&(c!=EOF))
			{
				printf("%c",c=fgetc(fp));
					if(c=='\n')
						count++;
			}
			if(c==EOF)
				break;
			printf("Do you want to continue(Y/n): ");
			gets(ch);
			if(*ch=='Y')
			{
				count=0;
				continue;
			}
			else
				break;
		}
		printf("\n");
	}
	fclose(fp);
	return 0;
}
