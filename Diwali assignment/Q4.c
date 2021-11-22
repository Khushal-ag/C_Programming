#include<stdio.h>
int main()
{
	int n,sum=0,i;
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		printf("%d + ",i);
		sum += i; 
	}
	printf("\b\b= %d",sum);
	return 0;
}
