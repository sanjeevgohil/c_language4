#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=1;
	while(i<=5)
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
		i++;
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