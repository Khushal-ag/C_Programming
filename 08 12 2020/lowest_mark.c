#include<stdio.h>
int main()
{
	int mark1,mark2,mark3,s;
	scanf("%d%d%d",&mark1,&mark2,&mark3);
	(mark1<mark2 && mark1<mark3)? (s=mark1): ((mark2<mark3 && mark2<mark1)? (s=mark2): (s=mark3));
	printf("%d",s);  
}
