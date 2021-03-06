#include<stdio.h>
void perfect(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		int s=0;
		for(int j=2;j<=*(a+i)/2;j++)
		{
			if(*(a+i)%j==0)
			s+=j;
		}
		s+=1;
		if(s == *(a+i))
		printf("%d is perfect no.\n",*(a+i));
		else
		printf("%d is not perfect no.\n",*(a+i));
	}
}
int main()
{
	int n;
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter %d no. : ",i+1);
		scanf("%d",&a[i]);
	}
	perfect(a,n);
}
