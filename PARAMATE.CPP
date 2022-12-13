#include<iostream.h>
#include<conio.h>

class Abc
{
	public:
	Abc()
	{
		cout<<"\n welcome";
	}
	Abc (char str[])
	{
		cout<<str;
	}
};
void main()
{
	clrscr();
	Abc a1;
	Abc a2(" fiyaz");

	getch();
}

