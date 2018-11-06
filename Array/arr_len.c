#include<stdio.h>
#include<string.h>


int main()
{
	char name[30];
	int k;
	printf("Enter your name: ");
	//for(k=0;k<30;k++)
		scanf("%s",name);
	printf("Entered name: ");
	for(k=0;name[k]!='\0';k++)
		printf("%c",name[k]);
	printf("\n");
	//k=strlen(name);
	printf("Length of your name is %d.\n",k);
	int j = sizeof(name);
	printf("Size of name array is %d.\n",j);
	return 0;
}
