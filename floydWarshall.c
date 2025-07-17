#include<stdio.h>
int i,j,k;
void floydWarshall(int m[4][4], int n)
{
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(m[i][j]>m[i][k]+m[k][j])
				{
					m[i][j]=m[i][k]+m[k][j];
				}
		    }
	    }
	}
	printf("All Pairs Shortest Path is :\n");
		for(i=0;i<n;i++)
	    {
	    	for(j=0;j<n;j++)
	    	{
	    		printf("%d ",m[i][j]);
			}
	    	printf("\n");
		}
}
int main()
{
	int cost[4][4] = {
	{0, 3, 999, 999}, 
	{999, 0, 12, 5}, 
	{4, 999, 0, -1}, 
	{2, -4, 999, 0}}; 
	int n = 4;

	floydWarshall(cost,n);
}

