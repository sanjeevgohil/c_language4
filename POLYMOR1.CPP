#include<iostream.h>
#include<conio.h>

int sum (float a, float b)
{
	return a+b;
}
int sum (int a, int b)
{
	return a+b;
}
void main()
{
	int a=10, b=20;
	float c=3,d=4;
	clrscr();
	cout<<"\n total is "<<sum(a,b);
	cout<<"\n total is "<<sum(c,d);

	getch();
}

