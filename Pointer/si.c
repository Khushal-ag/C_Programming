#include<stdio.h>
int main()
{
	int p,r,t;
	int *pi=&p,*ri=&r,*ti=&t;
	printf("Enter principal,rate,time(yr) : ");
	scanf("%d %d %d",pi,ri,ti);
	float si = *pi * *ri * *ti/100.0;
	printf("SI = %.2f",si);
}
