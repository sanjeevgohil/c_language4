#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=1;
	do
	{
		for(s=i;s>1;s--)
		{
			printf("   ");
		}
		for(j=i;j<=5;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
		i++;
	}while(i<=5);
	for(i=5;i>=1;i--)
	{
		for(s=i;s>1;s--)
		{
			printf("   ");
		}
		for(j=i;j<=5;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}
	getch();
}