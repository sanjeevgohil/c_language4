#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 5

void input(int []);
void output(int []);
void bs(int []);

void main()
{
	int a[size];
	clrscr();

	//Input Element in an array
	printf("\n Input A Array:\n");
	input(a);

	bs(a);

	//Output Element in an array
	printf("\n Output A Array:\n");
	output(a);
	getch();
}
void input(int a[])
{
	int i;
	for(i=0;i<=size-1;i++)
	{
		printf("\n Enter Number :");
		scanf("%d",&a[i]);
	}
}
void output(int a[])
{
	int i;
	for(i=0;i<=size-1;i++)
	{
		textcolor(i+5);
		cprintf("\n\r Number is:%d",a[i]);
		delay(900);

	}
}
void bs(int a[])
{
	int i,j,temp;
	for(i=0;i<=size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}