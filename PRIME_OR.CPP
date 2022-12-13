#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,flag=1,d=0;
	clrscr();
	printf("\nEnter Number :");
	scanf("%d",&no);
	for(i=2; i<no; i++)
	{
		if(no%i)





		{
			printf("\nNumber Is Divide By :%d",i);
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("\nNumber Is Prime");
	}
	else
	{
		printf("\nNumber Is Not Prime");
	}
	getch();
}