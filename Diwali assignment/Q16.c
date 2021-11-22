#include<stdio.h>
#include<math.h>
int main()
{
	float xp,yp,xq,yq;
	printf("Enter the Coordinates of point p : ");
	scanf("%f%f",&xp,&yp);
	printf("\nEnter the Coordinates of point q : ");
	scanf("%f%f",&xq,&yq);
	float m = (yq - yp)/(xq - xp);
	float a = (atanf(m)*180)/3.14;
	printf("Slope = %f\nAngle = %f",m,a);
	return 0;
}
