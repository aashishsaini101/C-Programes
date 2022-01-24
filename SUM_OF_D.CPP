//	Sum of digits

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,sum=0,m;
printf("Enter an no.");
scanf("%d",&a);
while(a!=0)
{
m=a%10;
sum=sum+m;
a=a/10;
}
printf("%d",sum);
getch();
}