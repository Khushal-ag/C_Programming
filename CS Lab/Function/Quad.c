#include<stdio.h>
#include<math.h>
int QUAD(int a,int b,int c)
{
	float d = pow(b,2) - 4*a*c;
	if(d>=0)
	return 1;
	else
	return 0;
}
int main()
{
	int a,b,c;
	printf("\nEnter Coefficients of Quadratic Equation :\n");
	printf("a => ");
	scanf("%d",&a);
	printf("b => ");
	scanf("%d",&b);
	printf("c => ");
	scanf("%d",&c);
	if(QUAD(a,b,c))
	printf("REAL ROOTS");
	else
	printf("IMAGINARY ROOTS");
}
