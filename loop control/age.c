#include<stdio.h>
int main()
{
	int i=15;
	while(i--)
	{
	    int age;
		scanf("%d",&age);
		if(age>=0 && age<=15)
  		     printf("Still a baby\n");
        else if(age>=6 && age<=17)
        	 printf("Attending school\n");
        else
 	         printf("Adult life\n");
 	 		     
	}
}
