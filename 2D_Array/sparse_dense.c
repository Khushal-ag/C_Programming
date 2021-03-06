#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter no. of rows = ");
	scanf("%d",&r);
	printf("Enter no. of column = ");
	scanf("%d",&c);
	int a[r][c],zero=0,ele=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter [%d][%d] element = ",i+1,j+1);
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			zero++;
			else
			ele++;
		}
	}
	if(ele>zero)
	printf("Dense");
	else if(zero>ele)
	printf("Sparse");
	else
	printf("Neither Dense Nor Sparse");
}

