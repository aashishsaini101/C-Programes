//	electricity bill
#include <conio.h>
#include <stdio.h>
int main()
{
	//clrscr();
	float rate = 0, amount = 0;
	int call;
	printf("enter the no of calls");
	scanf("%d", &call);
	if (call < 151)
	{
		rate = 0;
	}
	else if (call < 251)
	{
		rate = 0.9;
	}
	else if (call < 401)
	{
		rate = 1.2;
	}
	else
	{
		rate = 1.5;
	}
	amount = rate * call;
	printf("your phone bill is of amount of =%f", amount);
	return 0;
}