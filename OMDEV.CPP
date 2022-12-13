#include<stdio.h>
#include<conio.h>
stuct stud
{
	int rno;
	char nm[20];
	struct mark
	{
		int m1,m2,m3;
	};
	struct mark m;
	int tot;
	float per;
};

void disp(struct stud s[]);
struct stud s[3];

void main()
{
	int i;
	clrscr();
	for(i=0;i<=2;i++)
	{
		printf("\n Enter Roll No:");
		scanf("%d",&s[i].rno);
		fflush(stdin);
		printf("\n Enter Name:");
		gets(s[i].nm);
		printf("\n Enter Mark-1:");
		scanf("%d",&s[i].m.m1);
		printf("\n Enter Mark-2:");
		scanf("%d",&s[i].m.m2);
		printf("\n Enter Mark-3:");
		scanf("%d",&s[i].m.m3);

		s[i].tot=s[i].m.m1+s[i].m.m2+s[i].m.m3;
		s[i].per=s[i].tot/3.0;
	}
	disp(s);
}
void disp(struct stud s[])
{
	int i;
	clrscr();
	printf("\n\t\t STUDENT REPORT \n");
	printf("\n ROLL NO\TNAME\TMARK-1\TMARK-2\TMARK-3\TTOTAL\TPER\n");
	for(i=0;i<=2;i++)
	{
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",s[i].rno,s[i].nm,s[i].m.m1,s[i].m.m2,s[i].m.m3,s[i],tot,s[i].per);
	}
	getch();
}