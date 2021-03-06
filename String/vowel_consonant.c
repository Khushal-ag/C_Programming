#include<stdio.h>
int main(){
	char s[100];
	int vo=0,co=0;
	printf("Enter String : ");
	scanf("%[^\n]",s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
			vo++;
	   }
		else if((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90)){
						   co++;	
        }
	}
	printf("Vowel = %d\n",vo);
	printf("Consonant = %d\n",co);
	}
