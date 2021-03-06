#include<stdio.h>
#include<math.h>
int pallindrome(int n)
{
	for(int i=n+1;;i++)
	{
		int temp=i,sum=0;
		while(temp!=0)
		{
			sum = sum*10 + temp%10;
			temp/=10;
		}
		if(sum==i)
		return i;
	}
}
int armstrong(int n)
{
	for(int i=n+1;;i++)
	{
		int temp=i,c=0;
		float arm=0;
		while(temp!=0)
		{
			c++;
			temp/=10;
		}
		temp=i;
		while(temp!=0)
		{
			arm += pow(temp%10,c);
			temp/=10;
		}
		if(arm==i)
		return i;
	}
}
int chk_prime(int n)
{
	int f=0;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	return 1;
	else
	return 0;	
}
int main()
{
	int n;
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter %d no.= ",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		int f = chk_prime(a[i]);
		if(f==1)
		{
			a[i] = pallindrome(a[i]);
		}
		else if(f==0){
			a[i] = armstrong(a[i]);
		}
		printf("%d ",a[i]);
	}
}
