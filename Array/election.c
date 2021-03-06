#include<stdio.h>
int main()
{
 	int t[10],b[10],et=0,eb=0,sumt=0,sumb=0,n=10;
	for(int i=0;i<n;i++)
	{
		printf("Enter Votes of %d state = ",i+1);
		scanf("%d %d",&t[i],&b[i]);
		sumt+=t[i];
		sumb+=b[i];
	}
	for(int i=0;i<n;i++)
	{
		if(t[i]>b[i]){
            et++;
            printf("Trump wins in state %d\n",i+1);
        }
		else if(b[i]>t[i]){
			 eb++;
			 printf("Biden wins in state %d\n",i+1);
		}
		else
			{
			 printf("Draw in state %d\n",i+1);	
			}
	}
	printf("\n");
	if(eb>et)
	printf("BIDEN WINS");
	else if(et>eb)
	printf("TRUMP WINS");
	else
	{
			if(sumt>sumb){
					printf("TRUMP WINS");
				}
			else{
					printf("BIDEN WINS");
				}
			
	}
}
