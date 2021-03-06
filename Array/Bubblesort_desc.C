#include<stdio.h>
int bubblesort(int a[],int n)
{
for(int j=1;j<n;j++)
{
	for(int i=0;i<n-j;i++)
	{
		if(a[i]<a[i+1])
		{
			int t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
}
return 0;
}
int main()
{
	
	int a[20],n;
	printf("Enter no. of elements to be insert = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter value -> ");
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	printf("In Ascending order:-\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}



