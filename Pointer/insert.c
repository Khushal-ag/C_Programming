#include<stdio.h>
void insert(int *a,int *n)
{
	for(int i=0;i<*n;i++)
	{
		scanf("%d",a+i);
	}
	int b,r;
	printf("Enter no. and address to insert : ");
	scanf("%d %d",&b,&r);
	for(int i=*n;i>=r;i--)
	{
		*(a+i)=*(a+i-1);
	}
	*(a+r-1)=b;
	++*n;
}
int main()
{
	int n;
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	int a[100];
	insert(a,&n);
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}
