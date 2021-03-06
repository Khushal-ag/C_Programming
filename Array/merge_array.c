#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter no. of elements in both arary : ");
	scanf("%d %d",&n,&m);
	int a[n],b[m],c[n+m];
	for(int i=0;i<n;i++)
	{
		printf("Enter element %d in array 1 = ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(int i=0;i<m;i++)
	{
		printf("Enter element %d in array 2 = ",i+1);
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n+m;i++)
	{
		if(i<n)
		c[i]=a[i];
		else if(i>n-1)
		c[i]=b[i-n];
	}
	printf("Merged array =>\n");
	for(int i=0;i<n+m;i++)
	{
		printf("%d ",c[i]);
	}
}
