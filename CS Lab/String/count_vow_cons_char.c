#include<stdio.h>
int main(){
	char s1[100];
	int v=0,co=0,c=0;
	printf("Enter String : ");
	scanf("%[^\n]",s1);
	for(int i=0;s1[i]!='\0';i++)
	{
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
					  v++;
        else if((s1[i]>=97 && s1[i]<=122)||(s1[i]>=65 && s1[i]<=90))
				      co++;
        else
        			  c++;
	}
	printf("Total Vowels = %d\n",v);
	printf("Total Consonants1 = %d\n",co);
	printf("Total Characters = %d\n",c);
}
