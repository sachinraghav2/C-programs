	#include<stdio.h>

int main()
{
	long int d1,d2,m1,m2,y1,y2,leapyears_in_date1,leapyears_in_date2,days_in_date1,days_in_date2;
	const int days_in_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter 1st date: ");
	scanf("%ld%ld%ld",&d1,&m1,&y1);
	printf("Enter 2nd date: ");
	scanf("%ld%ld%ld",&d2,&m2,&y2);
	if(m1<3)
	{
		leapyears_in_date1 = ((y1-1)/4) - ((y1-1)/100)+((y1-1)/400);
	}
	else
	{
		leapyears_in_date1 = ((y1)/4) - ((y1)/100) +((y1)/400);
	}
	if(m2<3)
	{
		leapyears_in_date2 = ((y2-1)/4) - ((y2-1)/100) +((y2-1)/400);
	}
	else
	{
		leapyears_in_date2 = ((y2)/4) - ((y2)/100)+((y2)/400);
	}
	days_in_date1=y1*365+d1+leapyears_in_date1;
	for(int i=0;i<m1-1;i++)
	{
		days_in_date1+=days_in_month[i];
	}
	days_in_date2=y2*365+d2+leapyears_in_date2;
	for(int i=0;i<m2-1;i++)
	{
		days_in_date2+=days_in_month[i];
	}
	printf("Total no of days in 1st date: %ld\n",days_in_date1);
	printf("Total no of days in 1st date: %ld\n",days_in_date2);
	printf("Total no of days between these 2 dates are: %ld\n",days_in_date2-days_in_date1);

	return 0;
}
