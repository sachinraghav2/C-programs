#include<stdio.h>
int main(int argc,char * argv[])
{
	char c;
	FILE*fp=fopen(argv[1],"r"),*target=fopen("Target.txt","r+");
	if(fp==NULL)
		printf("Error in opening Source1.txt\n");
	else if(target==NULL)
		printf("Error in opening Target.txt\n");
	else
	{
		while((c=fgetc(fp))!=EOF)
			fputc(!c,target);
	}
	rewind(fp);
	while((c=fgetc(fp))!=EOF)
			printf("%c",c);
	rewind(target);
	while((c=fgetc(target))!=EOF)
			printf("%c",!c);
	fclose(fp);
	fclose(target);
	return 0;
}
