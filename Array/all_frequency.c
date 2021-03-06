#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of elements. = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter %d no. = ",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;)
	{
		int ele=a[i],temp=a[i],c=0;
		while(ele == a[i])
		{
			c++;
			ele=a[i+c];
		}
		i+=c;
		printf("%d occurs %d times.\n",temp,c);
	}
}
