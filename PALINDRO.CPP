#include<stdio.h>
#include<conio.h>
void main()
{
	long int no,no1,rem,ans=0;
	clrscr();
	printf("\nEnter No :");
	scanf("%ld",&no);

	no1=no;
	while(no>0)
	{
		rem=no%10;
		ans=ans*10+rem;
		no=no/10;
	}
	if(ans==no1)
	{
		printf("\nNumber Is Palindrom");
	}
	else
	{
		printf("\nNumber Is Not Palindrom");
	}
	getch();
}