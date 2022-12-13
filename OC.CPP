#include<conio.h>
#include<iostream.h>
class x
{

	int a,b;
	public:
		void input(int n1,int n2)
		{
			a=n1;
			b=n2;
		}
		void sum()
		{
			if(a>b)
			{
				cout<<"\nMax"<<a;
			}
			else
			{
				cout<<"\nMax"<<b;
			}
		}
};
void main()
{
	x x1,x2;
	clrscr();
	int a,b;
	cout<<"\nEnter firsrt value :";
	cin>>a;
	cout<<"\nEnter second value :";
	cin>>b;
	x1.input(a,b);
	x1.sum();
	getch();
}