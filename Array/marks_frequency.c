#include<stdio.h>
int main()
{
	int freq[5]={0};
	for(int i=1;i<=15;i++)
	{
		int mark;
		printf("Enter marks of %d student = ",i);
		scanf("%d",&mark);
		if(mark>5)
		freq[mark-6]++;
	}
	for(int i=0;i<5;i++)
	{
		printf("%d occurs %d times.\n",i+6,freq[i]);
	}
}
	
	// Basic method
/*	int marks[100];
	for(int i=0;i<10;i++)
	{
		printf("Enter %d student marks = ",i+1);
		scanf("%d",&marks[i]);
	}
	for(int i=61;i<=100;i++)
	{
		int p=0;
		for(int j=0;j<10;j++)
		{
			if(marks[j]==i)
			p++;
		}
			printf("%d occurs %d times.\n",i,p);
	}*/
