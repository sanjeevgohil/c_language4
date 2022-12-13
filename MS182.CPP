#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=5;
	while(i>=1)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
		i--;
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}
	getch();
}