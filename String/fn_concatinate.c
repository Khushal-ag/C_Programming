#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter string1 = ");
	gets(s1);
	printf("Enter string2 = ");
	gets(s2);
	strcat(s1,s2);
	printf("Concatinate string = ");
	puts(s1);
}
