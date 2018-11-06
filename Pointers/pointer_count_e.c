#include<stdio.h>
int main()
{
	int count=0;
	char *s[]={"we will teach you how to","Move a mountain","Level a building","Erase the past","Make a million"};
	for(int i=0;i<5;i++)
	{
		while(1)
		{
			if(*(*(s))=='e')
				count++;
			printf("%c\t%d\n",*(*(s)),count);
			if(*(*(s))=='\0')
			{
				*s=*(s+i+1);
				break;
			}
			*s+=1;
		}
	}
	printf("Number of e in the array: %d\n",count);
	return 0;
}
