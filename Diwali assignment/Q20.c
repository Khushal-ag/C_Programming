#include<stdio.h>
#include<math.h>
int main()
{
	float u=0,t=3,a=4,v,s;
	v=u+a*t;
	s=u*t + (1.0/2)*a*pow(t,2);
	printf("Velocity = %.2f\nDistance = %.2f",v,s);
	return 0;
}
