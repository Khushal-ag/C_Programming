#include<stdio.h>
#include<limits.h>
int main()
{
	int n;
	printf("Enter the length of the Array = ");
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enetr %d element = ",i+1);
		scanf("%d", &a[i]);
		}
		int max=a[0],min=INT_MAX,smax=a[0],smin=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			smax=max;
			max=a[i];
		}
		else if(a[i]>smax && a[i]!=max)
		{
			smax=a[i];
		}
		if(a[i]<min)
		{
			smin=min;
			min=a[i];
		}
			else if(a[i]<smin && a[i]>min)
		{
			smin=a[i];
		}
	
	}
	printf("The second largest element of the Array is=%d\n", smax);
	printf("The second smallest element of the Array is=%d\n", smin);
	return 0;
}
