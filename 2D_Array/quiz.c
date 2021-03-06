#include<stdio.h>
#include<limits.h>
int main()
{
	int n;
	printf("Enter no. of students = ");
	scanf("%d",&n);
	int r[n],q[3][n];
	for(int i=0;i<n;i++)
	{
		printf("Enter roll no. of student %d = ",i+1);
		scanf("%d",&r[i]);
	}
	for(int i=0;i<3;i++)
	{
		printf("Quiz %d =>\n",i+1);
		for(int j=0;j<n;j++)
		{
			printf("Score of rollno. %d = ",r[j]);
			scanf("%d",&q[i][j]);
		}
	}
	//1.High & low score
	for(int i=0;i<3;i++)
	{
		int max=INT_MIN,min=INT_MAX,maxpos,minpos;
		for(int j=0;j<n;j++)
		{
			if(q[i][j]>max)
			{
				maxpos=j;
				max=q[i][j];
			}
			
			if(q[i][j]<min)
			{
				minpos=j;
				min=q[i][j];
			}
		}
		printf("\nQuiz %d =>\n",i+1);
		printf("MAX score is %d by rollno. %d\n",max,r[maxpos]);
		printf("MIN score is %d by rollno. %d\n",min,r[minpos]);
	}
	printf("\n");
	//2.Average
	float oavg=0,max=0,min=999999;
	int maxpos,minpos;
	for(int i=0;i<3;i++)
	{
		float sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=q[i][j];
		}
		oavg+=sum;
		sum/=n;
		if(sum>max)
		{
			maxpos=i;
			max=sum;
		}
		if(sum<min)
		{
			minpos=i;
			min=sum;
		}
		printf("Quiz %d average = %.2f\n",i+1,sum);
	}
	printf("Overall avg = %.2f\n\n",oavg/(3*n));
	//3.Max & Min average
  	printf("Max average : Quiz %d => %.2f\n",maxpos+1,max);
  	printf("Min average : Quiz %d => %.2f\n",minpos+1,min);
  	//4.Each student highest and lowest marks
  	for(int j=0;j<n;j++)
  	{
  		int smax=INT_MIN,smin=INT_MAX;
  		for(int i=0;i<3;i++)
  		{
  			if(q[i][j]>smax)
			{
			 maxpos=i;
			 smax=q[i][j];
			}
			if(q[i][j]<smin)
  			{
			 minpos=i;
			 smin=q[i][j];
			 }
  			
		}
		printf("\nStudent rollno. %d :\n Highest marks in Quiz %d => %d\tLowest marks in Quiz %d => %d\n",r[j],maxpos+1,smax,minpos+1,smin);
    }
}
