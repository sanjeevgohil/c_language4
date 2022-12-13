#include<stdio.h>
#include<conio.h>
void disp(void);
void main()
{
	int a[10];
	clrscr();
	disp();
	disp();
	disp();
	getch();
}
void disp(void)
{
	static int i=1;
	printf("\n value of i is :%d",i);
	i=i+1;
}
