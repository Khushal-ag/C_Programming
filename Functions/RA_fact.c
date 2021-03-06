#include<stdio.h>
int fact(int n)
{
	int f=1;
	if(n==0||n==1)
	return f;
	else{
		while(n!=0)
		{
			f*=n;
			n--;
		}
		return f;
	}
}
int main()
{
	int n;
	printf("Enter a +ve integer : ");
	scanf("%d",&n);
	int f=fact(n);
	printf("Factorial = %d",f);
}
