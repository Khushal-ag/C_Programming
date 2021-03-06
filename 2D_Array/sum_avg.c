#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter no. of rows = ");
	scanf("%d",&r);
	printf("Enter no. of columns = ");
	scanf("%d",&c);
	int a[r][c];
	float sum=0,avg;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter [%d][%d] element = ",i+1,j+1);
			scanf("%d",&a[i][j]);
			sum += a[i][j];
		}
	}
	avg = sum/(r*c);
	printf("Sum = %.0f\n",sum);
	printf("Average = %.2f",avg);
}
