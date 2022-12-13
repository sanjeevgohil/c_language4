#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],s,i,flag=1;
	clrscr();
	for(i=0;i<=9;i++)
	{
		printf("\n Enter Number");
		scanf("%d",&a[i]);
	}
	printf("\n Enter Your Searching Elemnt:");
	scanf("%d",&s);

	for(i=0;i<=9;i++)
	{
		if(a[i]==s)
			{
			printf("\n Searching Element Found In List.");
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n Searching Element not found In List.");
	}
	getch();
}

