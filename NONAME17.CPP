#include<stdio.h>
#include<conio.h>
void main()
{
      float s1,s2,s3,tot,per;
      clrscr();
      printf("Enter sub 1 mark : ");
      scanf("%f",&s1);
      printf("Enter sub 2 mark : ");
      scanf("%f",&s2);
      printf("Enter sub 3 mark : ");
      scanf("%f",&s3);

      tot=s1+s2+s3;
      per=tot/3;

      printf("\ntotat is : %f",tot);
      printf("\nper is : %f",per);
      getch();
}
