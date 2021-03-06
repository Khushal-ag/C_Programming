#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of inputs = ");
	scanf("%d",&n);
	printf("\n");
	float avg=0,a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter %d no. = ",i+1);
		scanf("%f",&a[i]);
		avg += a[i];
	}
	avg/=n;
	printf("Average = %.2f",avg);
}

