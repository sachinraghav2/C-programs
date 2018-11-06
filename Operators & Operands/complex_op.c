#include<stdio.h>

int main()
{
	int r1,i1,r2,i2;
	printf("Enter real and complex part of 1st complex number: ");
	scanf("%d%d",&r1,&i1);
	printf("Enter real and complex part of 2nd complex number: ");
	scanf("%d%d",&r2,&i2);
	printf("Addition of the complex numbers: (%d)+i(%d)\n",r1+r2,i1+i2);
	printf("Difference of the complex numbers: (%d)+i(%d)\n",r1-r2,i1-i2);
	printf("Multiplication is: (%d)+i(%d)\n",((r1*r2)-(i1*i2)),((r1*i2)+(r2*i1)));
	printf("Divison is: (%d/%d)+i(%d/%d)\n",((r1*r2)+(i1*i2)),((r2*r2)+(i2*i2)),((r1*(-1)*i2)+(r2*i1)),((r2*r2)+(i2*i2)));
	return 0;
}
