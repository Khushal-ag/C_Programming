#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	int a[n],max,smax,min,smin;
	for(int i=0;i<n;i++)
	{
		printf("Enter %d no.= ",i+1);
		scanf("%d",&a[i]);
	}
	max=a[0];
	smax=a[0];
	min=a[0];
	smin=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			smax=max;
			max=a[i];
		}
		else if(a[i]>smax && a[i]!=max)
			 smax=a[i];
		if(a[i]<min)
		{
			smin=min;
			min=a[i];
		}
		else if(a[i]<smin && a[i]!=min)
			 smin=a[i];
			 
	}
	printf("Second Min = %d\nSecond Max = %d",smin,smax);
}
