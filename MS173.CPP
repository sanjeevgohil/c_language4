#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(s=i;s<5;s++)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("  %d ",i);
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(s=i;s<5;s++)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("  %d ",i);
		}
		printf("\n");
	}
	getch();
}