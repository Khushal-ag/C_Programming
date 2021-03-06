#include<stdio.h>
void fact()
{
	int n,f=1;
	printf("Enter a +ve integer : ");
	scanf("%d",&n);
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
	fact();
}
