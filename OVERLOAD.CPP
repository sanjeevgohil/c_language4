// overloading of operators using friend function

#include<iostream.h>
#include<conio.h>

class abc
{
	int a;
	public:
	void input(int i)
	{
		a=i;

	}
	void output()
	{
		cout<<"\n value of a is "<<a;
	}
	friend abc operator +(abc f1,abc f2);
	friend abc operator -(abc f1,abc f2);
};
abc operator+(abc f1,abc f2)
{
	abc temp;
	temp.a=f1.a+f2.a;
	return temp;
}
abc operator-(abc f1, abc f2)
{
	abc temp;
	temp.a=f1.a-f2.a;
	return temp;
}
void main()
{
	abc a1,a2,a3,a4;
	clrscr();
	a1.input(10);
	a2.input(20);

	a3=a1+a2;
	a4=a2-a1;

	a1.output();
	a2.output();
	a3.output();
	a4.output();
	getch();
}