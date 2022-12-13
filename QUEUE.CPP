#include<stdio.h>
#include<conio.h>
#define size 10

int queue[size],r=-1,f=-1;

void push(int no);
void pop(void);
void peep(void);


void main()
{
	int ch,no;
	while(1)
	{
		clrscr();
		printf("\n\t\t Q U E U E - O P E R A T I O N \n");

		printf("\n1.	Insert");
		printf("\n2.	Remove");
		printf("\n3.	Display");
		printf("\n4.	Exit");
		printf("\n\n\tEnter Your Choice:");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				printf("\nEnter Number:");
				scanf("%d",&no);
				push(no);
				break;
			case 2:
				pop();
				break;
			case 3:
				peep();
				break;
			case 4:
				printf("\nGood Bye..");
				getch();
				goto END;
			default:
				printf("\nWrong Choice...Try Again...");
		}
	}
	END:
}
void push(int no)
{
	if(r == size-1)
	{
		printf("\nQueue is Overfolw");
	}
	else
	{
		if(f == -1)
		{
			f++;
		}
		r++;
		queue[r]=no;
	}
	peep();
}
void pop(void)
{
	if(r == -1)
	{
		printf("\nQueue is Empty");
	}
	else if(f == r)
	{
		f = -1;
		r = -1;
	}
	else
	{
		f++;
		peep();
	}
}
void peep(void)
{
	int i;
	if(r == -1)
	{
		printf("\nQueue is Empty...");
	}
	else
	{
		printf("\n");
		for(i=f;i<=r;i++)
		{
			printf("%d->",queue[i]);
		}
	}
	getch();
}