
#include<stdio.h>
#include<conio.h>
int main()
{
// clrscr();
int marks1,marks2,marks3,total=0;
float per=0;
printf("enter marks of subject1 =");
scanf("%d",&marks1);
printf("\nenter marks of subject2 =");
scanf("%d",&marks2);
printf("\nenter marks of subject3 =");
scanf("%d",&marks3);
total=marks1+marks2+marks3;
printf("\ntotal marks =%d\n",total);
per=(total*100)/300;
printf("\nAnd your percentage is %f",per);


getch();
return 0;
}