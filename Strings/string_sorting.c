#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	printf("Enter number of strings you want to have: ");
	scanf("%d",&n);
	char string[n][30];
	char temp[30];
	for(int i=0;i<n;i++)
	{
		printf("Enter the %d string: ",i+1);
		scanf("%s",string[i]);
	}
	printf("Entered strings are: \n");
	for(int i=0;i<n;i++)
		printf("%s\n",string[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=0;string[i][k]!='\0'&&string[j][k]!='\0';k++)
			{
				if((string[i][k]>64)&&(string[i][k]<92)&&(string[j][k]>64)&&(string[j][k]<92))
				{
					if(string[i][k]>string[j][k])
					{
						strcpy(temp,string[i]);
						strcpy(string[i],string[j]);
						strcpy(string[j],temp);
						break;
					}
					else if (string[i][k]==string[j][k])
						continue;
					else
						break;
				}
				else if((string[i][k]>96)&&(string[i][k]<124)&&(string[j][k]>64)&&(string[j][k]<92))
				{
					if(string[i][k]-97>string[j][k]-65)
					{
						strcpy(temp,string[i]);
						strcpy(string[i],string[j]);
						strcpy(string[j],temp);
						break;
					}
					else if (string[i][k]==string[j][k])
						continue;
					else
						break;
				}
				else if((string[i][k]>64)&&(string[i][k]<92)&&(string[j][k]>96)&&(string[j][k]<124))
				{
					if(string[i][k]-65>string[j][k]-97)
					{
						strcpy(temp,string[i]);
						strcpy(string[i],string[j]);
						strcpy(string[j],temp);
						break;
					}
					else if (string[i][k]==string[j][k])
						continue;
					else
						break;
				}
				else if((string[i][k]>96)&&(string[i][k]<124)&&(string[j][k]>96)&&(string[j][k]<124))
				{
					if(string[i][k]>string[j][k])
					{
						strcpy(temp,string[i]);
						strcpy(string[i],string[j]);
						strcpy(string[j],temp);
						printf("\ncase 4\n");
						break;
					}
					else if (string[i][k]==string[j][k])
						continue;
					else
						break;
				}
				else
					;
			}
		}
		for(int i=0;i<n;i++)
			printf("%s\n",string[i]);
		printf("\n\n\n");
	}
	return 0;
}
