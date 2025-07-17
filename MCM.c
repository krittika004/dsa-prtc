//MCM
#include <stdio.h>
#include<limits.h>
#define INFINITY 9999
int A[20][20],B[20][20],d[20],i,j,n;

void printOptimal(int i,int j)
{
	if (i == j)
		printf(" A%d ",i);
	else
   {
      printf("( ");
      printOptimal(i, B[i][j]);
      printOptimal(B[i][j] + 1, j);
      printf(" )");
   }
}

void mcm()
{
	int c,k;
	for(i=n;i>0;i--)
	{
   		for(j=i;j<=n;j++)
    	{
     		if(i==j)
       			A[i][j]=0;
     		else
       		{
        		for(k=i;k<j;k++)
        		{
         			c=A[i][k]+B[k+1][j]+d[i-1]*d[k]*d[j];
         			if(c<A[i][j])
          			{
            			A[i][j]=c;
            			B[i][j]=k;
          			}
        		}
    		}
    	}
 	}
}

int mcOrder(int d[], int i, int j)
{
    if(i == j)
        return 0;
    int k,min = INT_MAX,count;
    for (k = i; k <j; k++)
    {
        count = mcOrder(d, i, k) + mcOrder(d, k+1, j) +d[i-1]*d[k]*d[j];
        if (count < min)
            min = count;
    }
    return min;
}

int main()
{
	int k;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
 			A[i][i]=0;
 			A[i][j]=INFINITY;
 			B[i][j]=0;
		}
	}
	printf("\nEnter the dimensions: \n");
	for(k=0;k<=n;k++)
	{
 		printf("D%d: ",k);
 		scanf("%d",&d[k]);
	}
	mcm();
	printf("\nCost Matrix M:\n");
	for(i=1;i<=n;i++)
 		for(j=i;j<=n;j++)
  			printf("A[%d][%d]: %d\n",i,j,A[i][j]);
	i=1,j=n;
	printf("\nMultiplication Sequence : ");
	printOptimal(i,j);
	printf("\nMinimum number of multiplications is : %d ",mcOrder(d, 1, n));

}
