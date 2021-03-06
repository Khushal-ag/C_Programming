#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	int arr[n],max,min,posx=0,posn=0;
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element = ",i+1);
		scanf("%d",&arr[i]);
		if(i==0){
	        max=arr[i];
	        min=arr[i];
	    }
		if(arr[i]>max)
		{
			max=arr[i];
			posx=i;
		}
		if(arr[i]<min)
		{
			min=arr[i];
			posn=i;
		}
	}
	arr[posx]+=arr[posn];
	arr[posn]=arr[posx]-arr[posn];
	arr[posx]-=arr[posn];
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
	
