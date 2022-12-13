#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\Enter First Number :");
	scanf("%d",&a);
	printf("\nEnter Second Number :");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nFirst Number Is :%d",a);
	printf("\nSecond Number IS :%d",b);
	getch();
}