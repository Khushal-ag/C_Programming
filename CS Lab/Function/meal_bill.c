#include<stdio.h>
void bill(float c)
{
	float tax = 20 * c / 100;
	float tip = 15 * tax / 100;
	printf("Total Bill = %.2f",c+tax+tip); 
}
int main()
{
	float charge;
	printf("Enter meal charge : ");
	scanf("%f",&charge);
	bill(charge);
}
