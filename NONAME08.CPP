
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=5;i>=1;i--)
	{
		k=i%2==0?1:0;
		for(j=i;j>=1;j--)
		{
			printf(" %d ",k);
			k=k==0?0:1;
		}
		printf("\n");
	}
	getch();
}

