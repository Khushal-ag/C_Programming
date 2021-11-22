#include<stdio.h>
int main()
{
	int no_of_hour,wage_per_hour,extra=0;
	float weekly_wage;
	printf("Enter Wages per hour = ");
	scanf("%d",&wage_per_hour);
	printf("Enter No. of Work Hours = ");
	scanf("%d",&no_of_hour);
	if(no_of_hour>30)
	{
		extra = no_of_hour - 30;
	}
	weekly_wage = no_of_hour*wage_per_hour + extra*wage_per_hour;
	printf("Weekly Wage = %f",weekly_wage);
	return 0;
	
}
