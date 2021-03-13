#include<stdio.h>
#include<math.h>
int main()
{
	long long int c,k,n,t;
	scanf("%lld",&c);
	scanf("%lld",&k);
	scanf("%lld",&n);
	t = c * pow(k,n);
	printf("%lld",t);
}
