#include<stdio.h>
void lrotate(int *a,int *n)
{
	for(int i=0;i<*n;i++)
	{
		printf("Enter %d no.:",i+1);
		scanf("%d",a+i);
	}
	int r;
	printf("Enter no. of rotation to perform : ");
	scanf("%d",&r);
	for(int j=0;j<r%*n;j++)
	{
		int t=*a;
		for(int i=0;i<*n-1;i++)
		{
			*(a+i)=*(a+i+1);
		}
		a[*n-1]=t;
	}
}
int main()
{
	int n;
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	int a[n];
	lrotate(a,&n);
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}
