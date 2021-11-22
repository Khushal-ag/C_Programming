#include<stdio.h>
int main()
{
	const double speed = 300000000;
	double wave;
	printf("Enter Wavelength = ");
	scanf("%lf",&wave);
	double frequency = speed/wave;
	printf("Frequency = %lf",frequency);
	return 0; 
}
