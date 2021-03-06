#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	int a[n],o[n],e[n],odd=0,even=0;
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element = ",i+1);
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			e[even]=a[i];
			even++;
		}
		else
		{
			o[odd]=a[i];
			odd++;
		}
	}
	printf("Odd Array\n");
	for(int i=0;i<odd;i++)
			printf("%d ",o[i]);
	printf("\nEven Array\n");
	for(int i=0;i<even;i++)
			printf("%d ",e[i]);
}
