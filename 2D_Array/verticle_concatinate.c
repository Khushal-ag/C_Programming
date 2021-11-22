#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter number of row to enter = ");
    scanf("%d",&r);
    printf("Enter number of column to enter = ");
    scanf("%d", &c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter [%d][%d] element = ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
}
