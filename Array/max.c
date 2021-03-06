#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	int arr[n],min=99999;
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element = ",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("Smallest element = %d",min);
}
	
