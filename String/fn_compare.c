#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[100];
	printf("Enter String 1: ");
	scanf("%[^\n]%*c",s1);
	printf("Enter String 2: ");
	scanf("%[^\n]",s2);
	if(strcmp(s1,s2)==0)
	printf("Equal Strings");
	else
	printf("Not equal");
}
