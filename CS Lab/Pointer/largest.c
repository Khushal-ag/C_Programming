
#include<stdio.h>
int largest(int *a,int *n)
{
	for(int i=0;i<*n;i++)
		scanf("%d",a+i);
	int max=*a,pos=0;
	for(int i=0;i<*n;i++)
	{
		if(*(a+i)>max)
		{
			max=*(a+i);
			pos = i;
	    }
	}
	printf("%d is Largest no. at position %d",max,pos+1);
}
int main()
{
	int n;
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	int arr[n];
    largest(arr,&n);
}
