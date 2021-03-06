#include<stdio.h>
void leap(int y)
{
	if((y%4==0  && y%100!=0)||y%400==0)
	printf("Leap year");
	else
	printf("Not a leap year");
}
int main()
{
	int y;
	printf("Enter Year : ");
	scanf("%d",&y);
	leap(y);
}
