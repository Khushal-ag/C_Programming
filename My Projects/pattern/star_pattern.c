#include<stdio.h>
int main()
{
	int n,j;
	scanf("%d",&n);
	printf("\n");
	for(int i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("   ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	for(int i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("   ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
