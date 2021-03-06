#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter no. of rows = ");
	scanf("%d",&r);
	printf("Enter no. of columns = ");
	scanf("%d",&c);
	int a[r][c],rsum,csum;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter [%d][%d] element = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int i=0;i<r;i++)
	{
		rsum =0;
		for(int j=0;j<c;j++)
			rsum += a[i][j];
		printf("Row %d sum = %d\n",i+1,rsum);
	}
	printf("\n");
	for(int j=0;j<c;j++)
	{
		csum =0;
		for(int i=0;i<r;i++)
			csum += a[i][j];
		printf("Column %d sum = %d\n",j+1,csum);
	}
}
