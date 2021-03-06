#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter no. of students = ");
	scanf("%d",&n);
	long long int roll[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter rollno. of %d student = ",i+1);
		scanf("%lld",&roll[i]);
	}
	printf("Enter no. from which you want rollno. = ");
	scanf("%d",&m);
	for(int i=m-1;i<n;i++)
	{
		printf("Rollno. of %d student = %lld\n",i+1,roll[i]);
	}
	
}
