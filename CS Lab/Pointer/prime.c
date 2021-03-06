#include<stdio.h>
void prime(int *a,int *n)
{
	for(int i=0;i<*n;i++)
	    scanf("%d",a+i);
	    int f=0;
	for(int j=0;j<*n;j++)
	{
		f=0;
		for(int i=2;i<=*(a+j)/2;i++)
		{
			if(*(a+j)%i==0)
			{
				f=1;
				break;
			}
		}
		if(f==1)
		printf("%d is not prime.\n",*(a+j));
		else
		printf("%d is prime.\n",*(a+j));
	}
}
int main()
{
	int n;
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	int a[n];
	prime(a,&n);
}
