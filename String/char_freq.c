#include<stdio.h>
int main()
{
	char s[100],c;
	int l=0;
	printf("Enter string1 = ");
	gets(s);
	printf("Enter character to find : ");
	scanf("%c",&c);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
		l++;
	}
	printf("%c occurs %d times.",c,l);
}
