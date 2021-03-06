#include<stdio.h>
int main()
{
	char s[1000];
	printf("Enter a string : ");
	gets(s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ' && s[i+1]==' ')
		{
			for(int j=i+1;s[j]!='\0';j++){
			s[j]=s[j+1];
			}
			i--;
		}
	}
	printf("String : %s",s);
}
