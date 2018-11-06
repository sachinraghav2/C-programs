#include<string.h>
#include<stdio.h>
int main()
{
	char s[50],*ptr;
	static int occ[26],count,i;
	printf("Enter the string: ");
	gets(s);
	ptr=s;
	while(*ptr!='\0')
	{
		if(*ptr!=' ')
		{
			count++;
			ptr+=1;
		}
		else
		{
			for(int j=1;j<25;j++)
			{
				if(j==count)
					occ[j]++;
			}
			ptr+=1;
			count=0;
		}
	}
	for(int j=1;j<25;j++)
	{
		if(j==count)
			occ[j]++;
	}
	for(int j=1;j<26;j++)
		printf("Word of length %d occured %d times.\n",j,occ[j]);
	return 0;
}
