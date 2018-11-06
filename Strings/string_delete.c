#include<stdio.h>

void deletes2(char *,char *);
int main()
{
	char s1[50],s2[20];
	printf("Enter the 1st string: ");
	gets(s1);
	printf("Enter the 2nd string: ");
	gets(s2);
	deletes2(s1,s2);
	printf("The processed string : %s\n",s1);
	return 0;
}
void deletes2(char *ptr1,char *ptr2)
{
	int k=0;
	//while(*ptr1!='\0')
	//{
		for(int i=0;*(ptr2+i)!='\0';i++)
		{
			while(*(ptr1+k)!='\0')
			{
				if (*(ptr2+i)==*(ptr1+k))
				{
					for(int j=k;*(ptr1+j)!='\0';j++)
						*(ptr1+j)=*(ptr1+1+j);
				}
				else
					k++;
			}
			k=0;
		}
		//ptr1+=1;
	//}
}
