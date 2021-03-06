#include<stdio.h>
int fact(int n)
{
	int f=1;
	if(n==0||n==1)
	printf("Factorial = 1");
	else{
		while(n!=0)
		{
			f*=n;
			n--;
		}
		printf("Factorial = %d",f);
	}
}
int main()
{
	int n;
	printf("Enter a +ve integer : ");
	scanf("%d",&n);
	fact(n);
}
