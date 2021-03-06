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
	int r;
	printf("Enter no. of rotation = ");
	scanf("%d",&r);
	r = r>n?r%n:r;
	for(int i=1;i<=r;i++)
	{
		int temp;
		for(int j=n-1;j>0;j--)
		{
			if(j==n-1)
			{
			temp = arr[n-1];
   			}
			arr[j]=arr[j-1];
		}
		arr[0]=temp;
	}
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
}
