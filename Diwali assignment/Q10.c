#include<stdio.h>
int main()
{
	printf("Enter quantity = ");
	float q;
	scanf("%f",&q);
	printf("\nEnter no. of person = ");
	int n;
	scanf("%d",&n);
	float net = n * q;
	printf("\nApple recieved = %.1f",net);
	return 0;
	 
}
