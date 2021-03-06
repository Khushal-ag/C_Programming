#include<stdio.h>
int main()
{
	int n=10,c=0;
	int a[n][n],b[n][n];
	printf("For First Matrix\n");
for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Enter [%d][%d] element = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nFor Second Matrix\n");
for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Enter [%d][%d] element = ",i+1,j+1);
			scanf("%d",&b[i][j]);
			if(a[i][j]==b[i][j])
			    c++;
		}
	}
	if(c>=90)
	printf("Tables are Identical\nPLAYER WINS.");
	else
	printf("Tables are UnIdentical\nPLAYER LOSES.");
}





