#include<stdio.h>
#include<math.h>
int main()

{
	const int t=2;
	float p,r,ci;
	scanf("%f",&p);
	scanf("%f",&r);
	ci = p * pow(1+(r/100),2) - p;
	printf("%.2f",ci);
}


