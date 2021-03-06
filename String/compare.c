#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[100];
	int f=0;
	printf("Enter String 1: ");
	scanf("%[^\n]%*c",s1);
	printf("Enter String 2: ");
	scanf("%[^\n]",s2);
	for(int i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	printf("Equal strings");
	else
	printf("Not equal");
}
