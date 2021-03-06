#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of rows/column = ");
	scanf("%d",&n);
	int a[n][n],ld=0,rd=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Enter [%d][%d] element = ",i+1,j+1);
			scanf("%d",&a[i][j]);
			if(i==j)
			ld+=a[i][j];
			if(i+j==n)
			rd+=a[i][j];
		}
	}
	printf("Sum of Left diagonal = %d\n",ld);
	printf("Sum of Right diagonal = %d",rd);	
}
