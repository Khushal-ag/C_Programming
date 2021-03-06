#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of students in section A = ");
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter marks of Roll no. %d  = ",i+1);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		printf("Marks of Roll no. %d of section B = %d\n",i+1,b[i]);
	}
}

