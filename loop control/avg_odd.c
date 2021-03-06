#include<stdio.h>
int main()
{
	int n1,n2,sum=0,c=0;
	scanf("%d %d",&n1,&n2);
	for(int i=n1;i<=n2;i++)
	{
		if(i%2==0)
		{
		 sum += i;
		 c++;
 	    }
	}
	printf("Average = %d",sum/c);
}
