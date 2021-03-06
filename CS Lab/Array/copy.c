#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of elements in A = ");
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element = ",i+1);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d element in B = %d\n",i+1,b[i]);
	}
}

