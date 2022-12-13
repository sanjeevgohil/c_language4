#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=1;
	A:
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",j);
		}
		for(s=i;s<5;s++)
		{
			printf("      ");
		}
		for(j=i;j>=1;j--)
		{
			printf(" %d ",j);
		}
		printf("\n");
		i++;
	}
	if(i<=5)
	{
		goto A;
	}
	getch();
}