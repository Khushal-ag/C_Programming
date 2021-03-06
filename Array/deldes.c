#include<stdio.h>
int deldes(int a[],int n,int x)
{
	for(int i=x-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	return n;
}
int main()
{
	int a[10],n,x;
	printf("Enter no. of elements to be insert =");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter %d number = ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter position on which value is deleted =");
	scanf("%d",&x);
	n=deldes(a,n,x);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

