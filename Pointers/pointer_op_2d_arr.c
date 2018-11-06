#include<stdio.h>

int main()
{
	float table[2][3]={{1.1,1.2,1.3},{2.1,2.2,2.3}};
	printf("x: %p\n",table);
	printf("x: %p\n",table+1);
	printf("x: %p\n",*(table+1));
	printf("x: %p\n",(*(table+1)+1));
	printf("x: %p\n",(*(table)+1));
	printf("x: %f\n",*(*(table)+1)+1);
	printf("x: %f\n",*(*(table)+1));
	printf("x: %f\n",*(*(table+1)));
	printf("x: %f\n",*(*(table)+1)+1);
	return 0;
}
