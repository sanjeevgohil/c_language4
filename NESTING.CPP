#include<stdio.h>
#include<conio.h>
void input(int a[]);
void output(int a[]);
void main()
{
	int a[10];
	clrscr();
	input(a);
	output(a);
	getch();
}
void input(int a[])
{
	int i;
	for(i=0;i<=9;i++)
	{
		printf("\n Enter number :");
		scanf("%d",&a[i]);
	}
}
void output(int a[])
{
	int i;
	for(i=0;i<=9;i++)
	{
		printf("\n value of i is :%d",i);
	}
}