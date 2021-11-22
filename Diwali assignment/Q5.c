#include<stdio.h>
float factorial(int a)
{
 	float f;
 	if(a==1||a==0)
 			f = 1;
 	else
 	{
 		f = a * factorial(a-1);
	 }
	 return f;
 	
}
int main()
{
	int n,i;
	float sum = 0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum += 1.0/factorial(i);
	}
	printf("%f ",sum);
	return 0;
	
}
