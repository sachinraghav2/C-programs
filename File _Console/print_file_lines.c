#include<stdio.h>
int main(int argc, char*argv[])
{
	FILE *fp=fopen("sample.txt","r+");
	int count=0,position=0;
	char c;
	if(fp==NULL)
	{
		printf("Error in file opening!!!\n");
		return -1;
	}
	else if(argc<2)
	{
		while((c=fgetc(fp))!=EOF)
		{
		//	printf("Entered while\n");
			if(c=='\n')
			{	count++;}
			position++;
			if(count>5)
			{
				fseek(fp,-position,SEEK_CUR);
				while((c=fgetc(fp))!='\n');
				count=0;position=0;
			}
		}
		//printf("%d %d %ld\n",count,position,ftell(fp));
		fseek(fp,-position,SEEK_CUR);
		//printf("%ld\n",ftell(fp));
		//printf("%c",c=fgetc(fp));
		while((c=fgetc(fp))!=EOF)
			printf("%c",c);
		printf("\n");
	}
	else
	{
		int lines=(*argv[1])-48;
		while((c=fgetc(fp))!=EOF)
		{
			if(c=='\n')
				count++;
			position++;
			if(count>lines)
			{
				fseek(fp,-position,SEEK_CUR);
				while((c=fgetc(fp))!='\n');
				count=0;position=0;
			}
		}
		fseek(fp,-position,SEEK_CUR);
		while((c=fgetc(fp))!=EOF)
			printf("%c",c);
	}
	fclose(fp);
	return 0;
}
