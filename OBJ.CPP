#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public:
	abc(){}
	abc(int no)
	{
		a=no;
	}
	int add(void)
	{
		return a+10;
	}
	void show(void)
	{
		cout<<"\n value of A is:"<<a;
	}
};
void main()
{
	int no;
	clrscr();
	cout<<"\n Enter Number:";
	cin>>no;

	abc a1(no);
	abc a2(a1.add());

	a1.show();
	a2.show();
	getch();
}