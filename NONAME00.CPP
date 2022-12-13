//function overloading
#include<conio.h>
#include<iostream.h>
class x
{
	public:
	void sum(int a,int b)
	{
		cout<<"\nSum is : "<<a+b;
	}
	void sum(float x,float y)
	{
		cout<<"\nSum is : "<<x+y;
	}
};
void main()
{
	clrscr();
	x x1;
	int a=5,b=4;
	float x=2.5,y=3.6;
	x1.sum(a,b);
	x1.sum(x,y);
	getch();
}
