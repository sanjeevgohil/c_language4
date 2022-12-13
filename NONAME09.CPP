





#include<stdio.h>
#include<conio.h>
void main()
{
	int no,tot=0,i=0;
	clrscr();
	while(1)
	{
		printf("\n enter Number[0] to exit:");
		scanf("%d",&no);
		if(no==0)
		{
			break;
		}
		tot=tot+no;
		i++;
       }
       printf("\n Number of Elements Are:%d",i);
       printf("\n Total is:%d",tot);
       getch();
 }



