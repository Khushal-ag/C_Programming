#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter no. of rows = ");
	scanf("%d",&r);
	printf("Enter no. of column = ");
	scanf("%d",&c);
	int a[r][c],b[r][c],s[r][c];
	printf("For First Matrix\n");
for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("Enter [%d][%d] element = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nFor Second Matrix\n");
for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter [%d][%d] element = ",i+1,j+1);
			scanf("%d",&b[i][j]);
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nMatrix after Sum\n");
for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d ",s[i][j]);
		printf("\n");
	}
}



