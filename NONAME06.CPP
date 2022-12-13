

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("\n Enter first no :");
	scanf("%d",&a);
	printf("\n Enter second no :");
	scanf("%d",&b);
	printf("\n Enter third no :");
	scanf("%d",&c);
	printf("\n Enter four no :");
	scanf("%d",&d);

	if(a>b && a>c && a>d)
	{
		printf("\n first no is max");
	}
	if(b>a && b>c && b>d)
	{
		printf("\n second no is max");
	}
	if(c>a && c>b && c>d)
	{
		printf("\n third no is max");
	}
	if(d>a && d>b && d>c)
	{
		printf("\n four no is max");
	}
	getch();
}