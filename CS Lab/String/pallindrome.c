#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char s[100];
	printf("Enter string : ");
	gets(s);
	for(i=0,j=strlen(s)-1;i<=j;i++,j--)
	{
		if(s[i]!=s[j])
		break;
	}
	if(i>j)
	printf("Palindrome string.");
	else
	printf("Not palindrome string.");
}

