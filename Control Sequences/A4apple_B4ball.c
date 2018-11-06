#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character (A/a-F/f): ");
	scanf("%c",&c);
	if((c=='A')||(c=='a'))
		printf("A for Apple.\n");
	else if((c=='B')||(c=='b'))
		printf("B for Ball.\n");
	else if((c=='C')||(c=='c'))
		printf("C for Cat.\n");
	else if((c=='D')||(c=='d'))
		printf("D for Dog.\n");
	else if((c=='F')||(c=='f'))
		printf("F for Fan.\n");
	else if((c=='E')||(c=='e'))
		printf("E for Elephant.\n");
	else
		printf("Character not in range.\n");


	switch(c)
	{
		case 'a':printf("A for Apple.\n");
			break;
		case 'A':printf("A for Apple.\n");
			break;
		case 'b':printf("B for Ball.\n");
			break;
		case 'B':printf("B for Ball.\n");
			break;
		case 'C':printf("C for Cat.\n");
			break;
		case 'c':printf("C for Cat.\n");
			break;
		case 'd':printf("D for Dog.\n");
			break;
		case 'D':printf("D for Dog.\n");
			break;
		case 'e':printf("E for Elephant.\n");
			break;
		case 'E':printf("E for Elephant.\n");
			break;
		case 'f':printf("F for Fan.\n");
			break;
		case 'F':printf("F for Fan.\n");
			break;
		default : printf("Character not in range.");
	}
	return 0;
}
