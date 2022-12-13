#include<iostream.h>
#include<conio.h>

float sum(float a, float b)
{
	return a+b;
}
int sum(int a, int b)
{
	return a+b;
}
float sum (float a, int b)
{
	return a+b;
}
void main()
{
	int a=1,b=2;
	float c=3.36,d=4.45;
	clrscr();
	cout<<"\n total is "<<sum(a,b);
	cout<<"\n total is "<<sum(c,d);
	cout<<"\n total is "<<sum(c,a);

	getch();
}