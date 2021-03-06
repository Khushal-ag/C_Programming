#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	int l=0;
	printf("Enter string1 = ");
	gets(s1);
	printf("Enter string2 = ");
	gets(s2);
	for(int i=0;s1[i]!='\0';i++)
			l++;
	int i;
	for(i=0;s2[i]!='\0';i++)
	{
		s1[l+i]=s2[i];
	}
	s1[l+i]='\0';
	printf("Concatinate string = ");
	puts(s1);
}
