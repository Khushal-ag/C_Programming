#include <stdio.h>
int main() {
     int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
    	printf("Enter %d number = ",i+1);
        scanf("%d",&a[i]);        
    }
    for(int i=0;i<n;i++)
    {
    	int r=1,s=0;
    	while(r<a[i]/2)
    	{
    		if(a[i]%r==0)
    		{
    			s=s+r;
    			r++;
			}
			}
			if(s==a[i])
			{
				for(int j=0;j<n;j++){
						if(a[j]==a[i])
        				{
            	 		int pos =j+1;
            	 		for(int k=pos;k<n;k++)
                 		 		a[k-1]  = a[k];
     			 			n -= 1;
 					    }
 					}
			}
			}
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
    return 0;
}

