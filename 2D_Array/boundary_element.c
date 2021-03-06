#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter no. of rows = ");
	scanf("%d",&r);
	printf("Enter no. of column = ");
	scanf("%d",&c);
	int a[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter [%d][%d] element = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==0||j==0||i==r-1||j==c-1)
			printf("%d ",a[i][j]);
			else
			printf("  ");
		}
		printf("\n");
	}
}

