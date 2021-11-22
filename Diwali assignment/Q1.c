#include<stdio.h>
int main()
{
	int price;
	float tax_rate,total;
	printf("Enter Price of Product = ");
	scanf("%d",&price);
	printf("\nEnter Sale Tax = ");
	scanf("%f",&tax_rate);
	total = price + price*tax_rate/100;
	printf("\nTotal Price = %.2f",total);
	return 0;
	
}
