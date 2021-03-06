#include<stdio.h>
int main(){
	char s1[100];
	int a=0,d=0,s=0;
	printf("Enter String : ");
	scanf("%[^\n]",s1);
	for(int i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>=97 && s1[i]<=122)||(s1[i]>=65 && s1[i]<=90))
					  a++;
        else if(s1[i]>=48 && s1[i]<=57)
				      d++;
        else
        			  s++;
	}
	printf("Total Alphabets = %d\n",a);
	printf("Total Digits = %d\n",d);
	printf("Total Special characters = %d\n",s);
}
