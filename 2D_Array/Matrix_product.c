#include <stdio.h>
int main()
{
  int r1,c1,r2,c2;
  printf("Enter rows for matrix 1 = ");
  scanf("%d", &r1);
  printf("Enter column for matrix 1 = ");
  scanf("%d",&c1);
  printf("\nEnter rows for matrix 2 = ");
  scanf("%d",&r2);
  printf("Enter column for matrix 2 = ");
  scanf("%d",&c2);
  if (c1 == r2)
  {
    int a[r1][c1],b[r2][c2],c[r1][c2];
    for(int i=0;i<r1;i++)
    {
    	for(int j=0;j<c2;j++)
    	c[i][j]=0;
	}
    printf("\nFor Matrix 1 =>\n");
    for(int i=0;i<r1;i++) //input matrix 1
    {
      for (int j=0;j<c1;j++){
      	printf("Enter [%d][%d] element :- ",i+1,j+1);
        scanf("%d", &a[i][j]);
    	}
    }
    printf("\nFor Matrix 2 =>\n");
    for (int i=0;i<r2;i++) //input
    {
      for (int j=0;j<c2;j++)
      {
      	printf("Enter [%d][%d] element :- ",i+1,j+1);
        scanf("%d", &b[i][j]);
    	}
    }
    for (int i=0;i<r1;i++)
    {
      for (int j=0;j<c2;j++)
      {
        for(int k=0;k<c1;k++)
        {
          c[i][j] += a[i][k]*b[k][j];
        }
      }
    }
    for (int i=0;i<r1;i++) //printing
    {
      for (int j=0;j<c2;j++)
        printf("%d ",c[i][j]);
      printf("\n");
    }
  }
  else
    printf("Multiplication not possible\n");
  return 0;
}
