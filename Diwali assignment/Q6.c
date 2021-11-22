#include<stdio.h>
int main()
{
	const int currency = 500;
	float q1 = 2.0,p1 = 50.0 ,v1 = q1 * p1,
		  q2 = 1.5,p2 = 35.0,v2 = q2 * p2,
		  q3 = 2.5,p3 = 10.0,v3 = q3 * p3,
		  q4 = 1.0,p4 = 15,v4 = q4 * p4;
	float value = v1 + v2 + v3 + v4;
	float amount = currency - value;
	printf("Amount = %.1f",amount);
	return 0;	  
}
