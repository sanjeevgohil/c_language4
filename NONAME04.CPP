#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter value of a : ");
	scanf("%d",&a);	//& address of
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("\nValue of a : %d",a);
	printf("\nValue of b : %d",b);
	printf("\na = %d\nb = %d",a,b);
	printf("\n sum : %d",a+b);
	printf("\n sum : %d",a-b);
	printf("\n sum : %d",a*b);
	printf("\n sum : %d",a/b);
	getch();
}
