#include<stdio.h>
int main()
{
	char s[100];
	int l=0;
	printf("Enter string1 = ");
	gets(s);
	for(int i=0;s[i]!='\0';i++)
			l++;
	printf("Length of String = %d",l);
}
