#include<stdio.h>
int main()
{
	int money1,money2;
	printf("Enter money gave to saurav = ");
	scanf("%d",&money1);
	printf("Enter money gave to sajal = ");
	scanf("%d",&money2);
	money1 += money2;
	money2 = money1 - money2;
	money1 -= money2;
	printf("Money on saurav = %d\nMoney on sajal = %d",money1,money2);
	return 0;	  
}
