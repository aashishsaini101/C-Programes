//interchanging 2 no without using 3 variable.

#include<stdio.h>
#include<conio.h>
int main()
{

int a=2,b=5;
printf("Value of a = %d\nValue of b = %d\n\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After interchanging,\n\nValue of a = %d\nValue of b = %d\n\n",a,b);

    return 0;
}