#include<stdio.h>
float a,b;
void calc();
float fact(float);
int main()
{	
	int c;
	printf("Enter two value: ");
	scanf("%f%f", &a,&b);
	printf("Enter the number of operation you want to perform:\n");
	printf("1. Addition\n2. Subraction.\n3. Multiplication\n4. Division\n5. Modulus\n6. Factorial\n7. Square\n");
	scanf("%d",&c);
	calc(c);
	return 0;
}

void calc(int c)
{
	switch(c)
	{ case 1: printf("Sum of numbers:%f\n", a+b);
		break;
	case 2: printf("Difference of the numbers:%f\n", a-b);
	break;
	case 3: printf("Multiplication of numbers:%f\n",a*b);
	break;
	case 4:	printf("Quotient is:%f\n",a/b);
	break;
	case 5: printf("Modulus is:%d\n",((int)a)%((int)b));
	break;
	case 6:	printf("Factorial of %f is %f & of %f is %f.\n",a,fact(a),b,fact(b));
	break;
	case 7:	printf("Square of %f is %f & of %f is %f.\n",a,a*a,b,b*b);
	default : printf("Wrong Choice!!!\n");
	}
}

float fact(float n)
{
	if(n<2)
		return 1;
	else
		return n*fact(n-1);
}
