#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	int arr[n],p=0,N=0,z=0;
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element = ",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]>0)
		p++;
		else if(arr[i]<0)
		N++;
		else
		z++;
	}
	printf("Total Positive no. = %d\nTotal Negative no. = %d\nTotal zero no. = %d",p,N,z);
}

