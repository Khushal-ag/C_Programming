#include<stdio.h>
int hamming(int a,int b)
{
	int ba,bb,c=0;
	while(a!=0||b!=0)
	{
		ba=a%2;
		a/=2;
		bb=b%2;
		b/=2;
		if(ba!=bb)
		c++;
	}
	return c;
}
int main()
{
	int a,b;
	printf("Enter two no. = ");
	scanf("%d %d",&a,&b);
	int c=hamming(a,b);
	printf("Hamming distance = %d",c);
}
