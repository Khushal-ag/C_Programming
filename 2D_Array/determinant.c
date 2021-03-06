#include<stdio.h>
int main()
{
	int a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Enter [%d][%d] element = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	int det=0;
	for(int i=0;i<3;i++)
		det += a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]);
	printf("Determinant = %d",det);
}
