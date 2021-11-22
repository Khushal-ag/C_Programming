#include<stdio.h>
int main()
{
	int a[9],i,j,k,p=0;
	for(i=0;i<9;i++)
	{
		printf("Enter %d integer = ",i+1);
		scanf("%d",&a[i]);
		
	}
	for(j=1;j<=3;j++)
	{
		int k=3;
		while(k--)
		{
			printf("%d,",a[p]);
			p++;
		}
		printf("\b\n");
	}
	return 0;
}
