#include<stdio.h>
void prime(int *n)
{
	int f=0;
	for(int i=2;i< *n/2;i++)
	{
		if(*n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	printf("No. is not prime.");
	else
	printf("No. is prime.");
}
int main()
{
	int n;
	scanf("%d",&n);
	prime(&n);
}
