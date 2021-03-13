#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("\n");
	for(int i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=n-i;j++)
		{
			printf("   ");
		}
		j--;
		int sum=0;
		for(int k=1;k<=j;k++)
		sum+=k;
		for(int a=j;a<n;)
		{
			printf(" %d ",sum + 1);
			a++;
			sum = sum + a + 1;
		}
		
		printf("\n");
	}
}
