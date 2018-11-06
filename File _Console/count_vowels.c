#include<stdio.h>
#include<string.h>
int main()
{
	char c;
	int count[]={0,0,0,0,0},sum=0,i=0;
	printf("Enter the string: ");
	while((c=getchar())!='\n'&&(c!=EOF))
	{
		i++;
		if(c=='a')
		{
			count[0]++;
			sum++;
		}
		else if(c=='e')
		{
			count[1]++;
			sum++;
		}
		else if(c=='i')
		{
			count[2]++;
			sum++;
		}
		else if(c=='o')
		{
			count[3]++;
			sum++;
		}
		else if(c=='u')
		{
			count[4]++;
			sum++;
		}
		else
			;
	}
	printf("a %d;e %d;i %d;o %d;u %d;rest %d.\n",count[0],count[1],count[2],count[3],count[4],i-sum);
	printf("Percentages of total:\na %d%%;e %d%%;i %d%%;o %d%%;u %d%%;rest %d%%.\n",(count[0]*100)/i,(count[1]*100)/i,(count[2]*100)/i,(count[3]*100)/i,(count[4]*100)/i,((i-sum)*100)/i);
	return 0;
}
