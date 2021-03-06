#include<stdio.h>
void binomial(int n,int r)
{
	if(n>=r)
	 {
	 	float cof = (float)fact(n)/(fact(r)*fact(n-r));
	 	printf("Binomial coefficient = %.2f",cof);
	 }
	 else
	 printf("Not Possible");
}
int fact(int n)
{
	int f=1;
	if(n==0||n==1)
	return 1;
	else
	f=n*fact(n-1);
	return f;
}
int main()
{
 	int n,r;
	 printf("Enter value of n = ");
	 scanf("%d",&n);
	 printf("Enter value of r = ");
	 scanf("%d",&r);
	 binomial(n,r);
}
