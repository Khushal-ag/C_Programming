#include<stdio.h>
int main()
{
	char s[100],s2[100];
	printf("Enter string1 = ");
	gets(s);
	for(int i=0;s[i]!='\0';i++)
			s2[i]=s[i];
	printf("String2 = ");
	puts(s2);
}
