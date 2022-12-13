#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	void Abc::disp(void)
	{
		cout<<"\nValue is:"<<a;
	}
	public:
	void setval(int i)
	{
		a = i;
		disp();
	}

};
void main()
{
	clrscr();
	Abc a1,a2;
	a1.setval(10);
	a2.setval(20);

	getch();
}