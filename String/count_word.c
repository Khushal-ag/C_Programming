#include<stdio.h>
int main()
{
	char str[100];
	int i,f=0,c=0;
	printf("Enter string.\n");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '||str[i]=='\t'||str[i]=='\n')
		f=0;
		else if(f==0)
		{
			f=1;
			c++;
		}
	}
	printf("No. of words = %d",c);
}

