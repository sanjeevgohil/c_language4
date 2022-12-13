#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	A(int i)
	{
		a = i;
	}
	virtual void getval(void)
	{
		cout<<"\n Value of A is:"<<a;
	}
};
class B : public A
{
	int b;
	public:
	B(int i,int j): A(i)
	{
		b = j;
	}
	virtual void getval(void)
	{
		cout<<"\n Value of B is:"<<b;
	}
};
void main()
{
	clrscr();
	A *a1;
	a1=new A(10);
	a1->getval();
	a1=new B(45,20);
	a1->getval();
	getch();
}