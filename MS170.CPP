#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=1;
	while(i<=5)
	{
		for(s=i;s>1;s--)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			printf("  %d ",i);
		}
		printf("\n");
		i++;
	}
	getch();
}