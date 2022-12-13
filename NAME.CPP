#include<stdio.h>
#include<conio.h>
void main()
{
	char nm[100],ch;
	int i=0;
	clrscr();
	printf("\n input name: ");

	while(1)
	{
		ch=getchar();
		if(ch!='.')
		{
			nm[i]=ch;
			i++;
		}
		else
		{
			nm[i]='\0';
			break;
		}
	}
	printf("\n input string is:");
	puts(nm);



	getch();
}
