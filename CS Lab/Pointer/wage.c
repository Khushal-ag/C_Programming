#include<stdio.h>
#define sal 10000
int wage(int *h)
{
	int total=0;
	for(int i=0;i<7;i++)
 	{
 		printf("Hour of %d day = ",i+1);
		scanf("%d",h+i);
		total += *(h+i);
	}
		int extra = total - 70;
		int *e=&extra;
		int bonus=0;
		if(*e>10)
		bonus=15000;
		else if(*e<=10&&extra>=6)
		bonus = 10000;
		else if(*e<=5)
		bonus =5000;
		return bonus;
}
int main()
{
	int h[7];
	int bonus=wage(h);
	printf("Total salary = %d",sal+bonus);
	return 0;	
}
