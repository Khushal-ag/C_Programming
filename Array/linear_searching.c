#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element = ",i+1);
		scanf("%d",&arr[i]);
	}
	int no,f=0;
	printf("Enter no. to search = ");
	scanf("%d",&no);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==no){
			f=1;
		printf("%d find at %d position.\n",no,i+1);
		}
	}
	if(f==0)
	printf("%d Not Found.\n",no);
}
