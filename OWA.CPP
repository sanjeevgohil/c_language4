#include<iostream.h>
#include<conio.h>
class Abc
{
	int a[5];
	public:
	void setval(void)
	{
		int i;
		for(i=0;i<=4;i++)
		{
			cout<<"\nEnter Number:";
			cin>>a[i];
		}
	}
	void disp(void)
	{
		int i;
		for(i=0;i<=4;i++)
		{
			cout<<"\nValue is:"<<a[i];
		}
	}
};
void main()
{
	clrscr();
	Abc a1[3];
	int i;
	cout<<"\nInput Array Element:\n";
	for(i=0;i<=2;i++)
	{
		cout<<i+1<<"Object Array:\n";
		a1[i].setval();
	}
	clrscr();
	cout<<"\nOutput Array Element:\n";
	for(i=0;i<=2;i++)
	{
		cout<<i+1<<"Object Array:\n";
		a1[i].disp();
	}
	getch();
}