//multilevel inheritance
#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void dispA(void)
	{
		cout<<"\nClass A";
	}
};
class B : public A
{
	public:
	void dispB(void)
	{
		cout<<"\nClass B";
	}
};
class C : public B
{
	public:
	void disp(void)
	{
		cout<<"\nClass C";
	}
};
void main()
{
	clrscr();
	C c1;
	c1.dispA();
	c1.dispB();
	c1.disp();
	getch();
}
