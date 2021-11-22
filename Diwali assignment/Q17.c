#include<stdio.h>
int main()
{
	const int k=5;
	float g[5];
	int c[5],i,j;
	for(i=0;i<k;i++)
	{
		printf("Enter c%d and g%d :- ",i+1,i+1);
		scanf("%d %f",&c[i],&g[i]);
	}
	float sumcigi=0,sumci=0;
	for(j=0;j<k;j++)
	{
		sumcigi += c[j] * g[j];
		sumci += c[j];
		
	}
	float spi;
	spi = sumcigi/sumci;
	printf("SPI = %f",spi);
	return 0;
}
