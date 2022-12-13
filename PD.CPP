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
class B : public A
{
	int b;
	public:
	void setval(void)
	{
		cout<<"\n Enter Value of B is:";
		cin>>b;
	}
	void getval(void)
	{
		cout<<"\n Value of B is:"<<b;
	}
};
void main()
{
	clrscr();
	A *a1;
	a1->setval();
	((B *)a1)->setval();
	a1->getval();
	((B *)a1)->getval();
	getch();
}