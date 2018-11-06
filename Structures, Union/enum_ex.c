#include<stdio.h>
enum choice {addition,multiplication,devision,subtraction};
int main()
{
	int r1,i1,r2,i2,ch;
	printf("Enter real and complex part of 1st complex number: ");
	scanf("%d%d",&r1,&i1);
	printf("Enter real and complex part of 2nd complex number: ");
	scanf("%d%d",&r2,&i2);
	printf("Enter:\n0 for additon\n1 for multiplication\n2 for devision\n3 for subtraction\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case addition :	printf("Addition of the complex numbers: (%d)+i(%d)\n",r1+r2,i1+i2);
				break;
		case multiplication : printf("Multiplication is: (%d)+i(%d)\n",((r1*r2)-(i1*i2)),((r1*i2)+(r2*i1)));
					break;
		case devision : printf("Divison is: (%d/%d)+i(%d/%d)\n",((r1*r2)+(i1*i2)),((r2*r2)+(i2*i2)),((r1*(-1)*i2)+(r2*i1)),((r2*r2)+(i2*i2)));break;
		case subtraction : printf("Difference of the complex numbers: (%d)+i(%d)\n",r1-r2,i1-i2);break;
		default : ;
	}
	return 0;
}
