#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	void setval(void)
	{
		cout<<"\n Enter Value of A is:";
		cin>>a;
	}
	void getval(void)
	{
		cout<<"\n Value of A is:"<<a;
	}
};
void main()
{
	clrscr();
	A *a1;
	a1->setval();
	a1->getval();
	getch();
}