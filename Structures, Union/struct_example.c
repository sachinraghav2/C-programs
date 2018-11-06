#include<stdio.h>
struct time{
	int hrs,min,sec;
	};
int main()
{
	struct time t;
	printf("Enter exact time (hrs min sec): ");
	scanf("%d%d%d",&t.hrs,&t.min,&t.sec);
	printf("Time entered is : %d:%d:%d\n",t.hrs,t.min,t.sec);
	return 0;
}
