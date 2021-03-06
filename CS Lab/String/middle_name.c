#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter Name : ");
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			for(int j=i+1;str[j]!=' ';j++)
				printf("%c",str[j]);
			break;
		}
		
	}
}

