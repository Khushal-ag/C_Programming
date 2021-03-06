#include<stdio.h>
char upp_to_low(char c)
{
	if(c>=65&&c<=90)
	   c+=32;
	return c;
}
int main()
{
	char c;
	printf("Enter char = ");
	scanf("%c",&c);
	c = upp_to_low(c);
	printf("Char = %c",c);
}
