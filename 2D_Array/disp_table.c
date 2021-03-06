#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter no. of rows : ");
	scanf("%d",&r);
	printf("Enetr no. of column : ");
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
	printf("\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("|\t%d\t|",a[i][j]);
		printf("\n");
	}			
}
