#include<stdio.h>
int main()
{
	int d,m,y,d1,m1,y1,age;
	long day1,day2;
	printf("Enter your D.O.B in DD/MM/YYYY = ");
	scanf("%d/%d/%d",&d,&m,&y);
	day1 = y*365 + m*30 + d;
	printf("\nEnter Current date in DD/MM/YYYY = ");
	scanf("%d/%d/%d",&d1,&m1,&y1);
 	day2 = y1*365 + m1*30 + d1;
 	age = day2 - day1;
 	y = age/365;
 	age = age%365;
 	m = age/30;
 	age = age%30;
 	d = age;
	printf("\nYour Age is %d Years %d Months %d Days",y,m,d);
	return 0;
}
