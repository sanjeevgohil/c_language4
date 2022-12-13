#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=5;
	while(i>=1)
	{
		for(s=1;s<i;s++)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			printf("  %d ",i);
		}
		printf("\n");
		i--;
	}
	for(i=2;i<=5;i++)
	{
		for(s=1;s<i;s++)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			printf("  %d ",i);
		}
		printf("\n");
	}
	getch();
}