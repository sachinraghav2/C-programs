#include<stdio.h>
int power(int a,int b)
{
	if(b==0)
		return 1;
	else
		return a*power(a,b-1);
}
void decequi(int num)
{
	int array[16];
	for(int i=15;i>=0;i--)
	{
		array[i]=!(num&1);
		num>>=1;
	}
	num=0;
	for(int i=15;i>=0;i--)
		num+=(array[i]*power(2,15-i));
	printf("HEX euivalent is %x\n",num);
}
void masking(int num)
{
	int ch;
	printf("Choose:\n1.Bitwise AND.\n2.Bitwise XOR.\n3.Bitwise OR.\n");
	scanf("%d",&ch);
	int mask;
	printf("Enter mask value: ");
	scanf("%d",&mask);
	if(ch==1)
	{
		num&=mask;
		printf("%x\n",num);
	}
	else if(ch==2)
	{
		num^=mask;
		printf("%x\n",num);
	}
	else
	{
		num|=mask;
		printf("%x\n",num);
	}
}
void shifting(int num)
{
	int ch, bit;
	printf("Choose:\n1.Right Shift.\n2.Left Shift.\n");
	scanf("%d",&ch);
	printf("Number of bits: ");
	scanf("%d",&bit);
	if(ch==1)
		num>>=bit;
	else
		num<<=bit;
	printf("Processed: %x\n",num);
}

int main()
{
	int choice, num;
		while(1)
	{
		printf("Choose.\n1.HEX equivalent of 1's compliment.");
		printf("\n2.Masking.\n3.shifting.\n4.Exit.\n");
		scanf(" %d",&choice);
		printf("Enter HEX value: ");
		scanf(" %d",&num);
		//printf("\n");
		switch(choice)
		{
			case 1 : decequi(num);
					break;
			case 2 : masking(num);
					break;
			case 3 : shifting(num);
					break;
			case 4 : return 0;
			default: printf("Wrong choice!!!");
				return -1;
		}
	}
	return 0;
}
