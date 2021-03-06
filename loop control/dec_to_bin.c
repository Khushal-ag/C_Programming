#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	int binary[64];
	printf("Enter no. = ");
	scanf("%d",&n);
	int temp=n;
	for(i=0;n>0;i++)
	{
		binary[i] = n%2; 															
		n = n/2;
	}
	printf("Binary of %d is ",temp);
	while(i--)
	{
		printf("%d",binary[i]);
	}
}

