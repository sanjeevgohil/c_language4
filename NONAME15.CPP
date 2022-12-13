
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,temp;
	clrscr();
	for(i=0;i<=9;i++)
	{
		printf("Enter Number :");
		scanf("%d",&a[i]);
	}

	for(i=0;i<=9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	for(i=0;i<=9;i++)
	{
		printf("\n number is :%d",a[i]);
	}
	getch();
}