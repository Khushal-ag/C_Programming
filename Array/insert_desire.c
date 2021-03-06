#include<stdio.h>
int insdes(int a[],int n,int x,int pos)
{
	for(int i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=x;
	n++;
	return n;
}
void main()
{
	int a[10],n,x,pos;
	printf("Enter no. of elements to be insert =");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter %d value = ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter value to be insert = ");
	scanf("%d",&x);
	printf("Enter position = ");
	scanf("%d",&pos);	
	n=insdes(a,n,x,pos);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

