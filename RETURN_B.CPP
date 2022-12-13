#include<iostream.h>
#include<conio.h>

int&min(int&a,int&b)
{
	if(a<b)

	{
		return a;
	}
	else
	{
		return b;

	}
}
void main()
{
	int a=10,b=20;
	clrscr();
	cout<<"\n before swap:"<<endl;
	cout<<"\n value of a is :"<<a;
	cout<<"\n value of b is :"<<b;


	min(a,b)=100;


	cout<<"\n after swap:"<<endl;
	cout<<"\n value of a is :"<<a;
	cout<<"\n value of b is :"<<b;
	getch();
}

