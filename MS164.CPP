#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=5;
	A:
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
	if(i>=1)
	{
		goto A;
	}
















	getch();
}