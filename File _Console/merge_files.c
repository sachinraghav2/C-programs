#include<stdio.h>
int main(int argc,char *argv[]){
	char c;
	FILE* source1,*source2,*target;
	source1=fopen(argv[1],"r");
	source2=fopen(argv[2],"r");
	target=fopen(argv[3],"a");
	if(source1==NULL)
		printf("Error opening Source1.\n");
	else if(source2==NULL)
		printf("Error opening Source2.\n");
	else if(target==NULL)
		printf("Error opening Target.\n");
	else
	{
		while((c=fgetc(source1))!=EOF)
			fputc(c,target);
		fputc(':',target);
		while((c=fgetc(source2))!=EOF)
			fputc(c,target);
	}
	rewind(target);
	while((c=fgetc(target)!=EOF))
		printf("%c",c);
	fclose(source1);
	fclose(source2);
	fclose(target);
	return 0;
}
