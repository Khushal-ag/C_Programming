#include <stdio.h>
void check(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        int f=0;
        for(int j=2;j<= (*(p+i)/2);j++)
        {
            if((*(p+i))%j==0)
                {
                    f=1;
                    break;
                }
        }
        if(f==0)
            printf("%d is prime\n",*(p+i));
        else
            printf("%d is not prime\n",*(p+i));
    }   
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter elements\n");
    for(int i = 0; i < n; i++)
        scanf("%d", a + i);
    check(a,n);
    return 0;
}
