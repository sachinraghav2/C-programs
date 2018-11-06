#include<stdio.h>
struct s{
	int a;
	char b;
};
union u{
	int c;
	char d;
};
int main()
{
	printf("Structure size: %ld & Union size: %ld.\n",sizeof(struct s),sizeof(union u));
	return 0;
}
