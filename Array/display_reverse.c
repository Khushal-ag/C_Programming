#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("ARRAY :-\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}

