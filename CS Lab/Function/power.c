#include<stdio.h>
int pow(int x,int n)
{
	int p=1;
	for(int i=1;i<=n;i++)
			p*=x;
	return p;
}
int main()
{
	int x,n;
	printf("Enter a no. : ");
	scanf("%d",&x);
	printf("Enter power of no. : ");
	scanf("%d",&n);
	int p=pow(x,n);
	printf("%d^%d = %d",x,n,p);
}
