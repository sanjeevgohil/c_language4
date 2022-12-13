#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=5;
	while(i>=1)
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
		i--;
	}
	getch();
}