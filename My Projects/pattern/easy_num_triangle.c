#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("\n");
	for(int i=1;i<=n;i++)
	{
		int t=i;
		for(int j=n;j>=i;j--)
		{
			printf("%d ",t);
			t+=j;
		}
		printf("\n");
	}
}
