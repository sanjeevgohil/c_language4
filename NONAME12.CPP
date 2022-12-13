#include<iostream.h>
#include<conio.h>

class A
{
	public:
	void dispA()
	{
		cout<<"\n class A ";
	}
};
class B: public A
{
	public:
	void dispB()
	{
		cout<<"\n class B ";
	}
};

class C:public A
{
	public:
	void dispC()
	{
		cout<<"\n class C ";
	}
};

void main()
{
	clrscr();
	B b1;
	C c1;
	b1.dispA();
	b1.dispB();
	c1.dispA();
	c1.dispC();

	getch();

}

