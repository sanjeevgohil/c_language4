#include<stdio.h>
#include<conio.h>
void main()
{
	int a,c;
	clrscr();
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("\n1 for positive / negative");
	printf("\n2 for even / odd");
	printf("\n\nEnter your choice : ");
	scanf("%d",&c);
	switch(c)
	{
		case 1 :
			if(a>0)
			{
				printf("\na is positive");
			}
			else
			{
				printf("\na is negative");
			}
			break;
		case 2 :
			if(a%2==0)
			{
				printf("\na is even");
			}
			else
			{
				printf("\na is odd");
			}
			break;
		default:
			printf("Invalid input");
	 }
	 getch();
}
