#include<stdio.h>
#include<math.h>
int pallindrome(int n)
{
	for(int i=n+1;;i++)
	{
		if(chk_prime(i)){
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
}
int armstrong(int n)
{
	for(int i=n+1;;i++)
	{
		if(chk_prime(i)){
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
	printf("Enter a number = ");
	scanf("%d",&n);
		int f = chk_prime(n);
		if(f==1)
		{
			printf("%d is Prime.\n",n);
			n = pallindrome(n);
			printf("Next Pallindrome = %d",n);
		}
		else if(f==0){
			printf("%d is Composite.\n",n);
			n = armstrong(n);
			printf("Next Armstrong = %d",n);
		}
}
