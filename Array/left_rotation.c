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
		for(int j=0;j<n;j++)
		{
			if(j==0)
			{
			temp=arr[0];
   			}
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
}
