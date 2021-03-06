#include<stdio.h>
int main(){
	char s1[100];
	printf("Enter String : ");
	scanf("%[^\n]",s1);
	for(int i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>=97 && s1[i]<=122)
		{
			s1[i]=s1[i]-32;
		}
	}
	printf("String : %s",s1);
}
