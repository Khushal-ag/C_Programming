#include<stdio.h>
int main()
{
	char s[100];
	int l=0;
	printf("Enter string1 = ");
	gets(s);
	for(int i=0;s[i]!='\0';i++)
			l++;
	for(int i=0;i<=l/2;i++)
	{
		char temp;
		temp = s[i];
		s[i] = s[l-i-1];
		s[l-i-1]=temp;
	}
	printf("Reverse string = ");
	puts(s);
}
