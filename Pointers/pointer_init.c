#include<stdio.h>
int main()
{
	char *color[]={"red","green","blue","white","black","yellow"};
	printf("%p\n",color);
	printf("%p\n",color+2);
	printf("%p\n",*color);
	printf("%p\n",*color+2);
	printf("%s\t%p\n",color[5],*(color+5));
	return 0;
}
