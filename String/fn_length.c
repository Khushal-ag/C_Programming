#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("Enter a string = ");
	gets(s);
	int length=strlen(s);
	printf("Length of string = %d",length);
}
