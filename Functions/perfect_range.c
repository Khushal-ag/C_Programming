#include<stdio.h>
int perfect(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		int s=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			s+=j;
		}
		s+=1;
		if(s==i)
		printf("%d ",s);
	}
}
int main()
{
	int a,b;
	printf("Enter two no. = ");
	scanf("%d %d",&a,&b);
	perfect(a,b);
}
