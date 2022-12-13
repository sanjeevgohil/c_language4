#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[5],temp,s;
	clrscr();
	for(i=0;i<=4;i++)
	{
		printf("Enter Number is:");
		scanf("%d",a[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("Number is:%d",a[i]);
	}
	getch();
}