#include<stdio.h>
int main()
{
	long int population = 30000;
	population += 20 * population/100;
	population += 30 * population/100;
	printf("Total Population = %ld",population);
	return 0;
}
