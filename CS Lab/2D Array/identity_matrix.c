#include<stdio.h>
int main()
{
	int n,f=0;
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
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j){
				if(a[i][j]!=1)
				f=1;
			}
			if(i!=j){
				if(a[i][j]!=0)
				f=1;
			}
		}
		if(f==1)
		break;
	}
	if(f==0)
	printf("Identity Matrix");
	else
	printf("Not an Identity Matrix");
}
