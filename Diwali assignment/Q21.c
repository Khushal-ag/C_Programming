#include<stdio.h>
int main()
{
	 long long int roll;
	 int sum=0,t=4;
	 printf("Enter roll no. ");
	 scanf("%lld",&roll);
	 while(t--)
	 {
	 	sum += roll%10;
	 	roll = roll/10;
	 }
	 printf("Sum = %d",sum);
	 return 0;
}
