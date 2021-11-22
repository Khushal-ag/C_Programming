#include<stdio.h>
int main()
{
	float basic;
	printf("Enter your Basic salary = ");
	scanf("%f",&basic);
	float HRA = 15*basic/100;
	float TA = 20*basic/100;
 	basic += HRA + TA;
 	printf("Total Salary = %.2f",basic);
 	return 0;
}
