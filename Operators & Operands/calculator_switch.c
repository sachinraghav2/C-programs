#include<stdio.h>

int main()
{	float a,b;
	int c;
	float d;
	printf("Enter two value: ");
	scanf("%f%f", &a,&b);
	printf("Enter the number of operation you want to perform:\n");
	printf("1. Addition\n2. Subraction.\n3. Multiplication\n4. Division\n5. Modulus\n");
	scanf("%d",&c);
	switch(c)
	{
 case 1: printf("Sum of numbers:%f\n", a+b);
		break;
case 2: printf("Difference of the numbers:%f\n", a-b);
	break;
case 3: d=a*b;
	printf("Multiplication of numbers:%f\n",d);
	break;
case 4: d=a/b;
	printf("Quotient is:%f\n",d);
	break;
case 5: d=((int)a)%((int)b);
	printf("Modulus is:%f\n",d);
	break;
default : printf("Wrong Choice!!!\n");
	
}
return 0;
}

		 
