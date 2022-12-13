#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,flag=0;
	clrscr();
	printf("\n enter number:");
	scanf("%d",&n);
	for(i=2;i<n;i=i+10);
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\n number is prime");
	}
	else
	{
		printf("\n number is not prime");
	}
	getch();
}