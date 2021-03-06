#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of rows/column = ");
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Enter [%d][%d] element = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j||i+j==n-1)
			printf("%d ",a[i][j]);
			else
			printf("  ");
		}
		printf("\n");
	}
}


