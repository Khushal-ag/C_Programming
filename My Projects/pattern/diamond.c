#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	printf("\n\n");
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		for(j=1;j<=2*n-2*i;j++)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
		
	}
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		for(j=1;j<=2*n-2*i;j++)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
		
	}
}
