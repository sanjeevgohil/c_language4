//operator overloading
#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	A(){}
	A(int x,int y)
	{
		a=x;
		b=y;
		cout<<"\na = "<<a<<" b = "<<b;
	}
	A operator +(A a1)
	{
		A temp;
		temp.a=a+a1.a;
		temp.b=b+a1.b;
		return temp;
	}
	void disp()
	{
		cout<<"\nSum of objects : "<<a<<" and "<<b;
	}
};
void main()
{
	clrscr();
	A a1(5,6);
	A a2(4,5);
	A a3;
	a3 = a1+a2;
	a3.disp();
	getch();
}
