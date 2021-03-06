#include<stdio.h>
int main()
{
 	int n,i;
	int binary[64];
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		binary[i] = n%2; 															
		n = n/2;
	}
	while(i--)
	{
		printf("%d",binary[i]);
	}
}
