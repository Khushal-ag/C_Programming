#include<stdio.h>
int fact()
{
	int n,f=1;
	printf("Enter a +ve integer : ");
	scanf("%d",&n);
	if(n==0||n==1)
	return 1;
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
	int f=fact();
	printf("Factorial = %d",f);
}
