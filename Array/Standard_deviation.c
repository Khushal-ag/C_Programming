#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter no. of inputs = ");
	scanf("%d",&n);
	printf("\n");
	int a[n],mean=0;
	for(int i=0;i<n;i++)
	{
		printf("Enter %d no. = ",i+1);
		scanf("%d",&a[i]);
		mean += a[i];
	}
	mean/=n;
	float sd=0;
	for(int i=0;i<n;i++)
	{
		sd += pow(a[i]-mean,2);
	}
	sd/=n;
	sd = sqrt(sd);
	printf("\nStandard deviation = %.2f",sd);
}
