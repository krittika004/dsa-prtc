#include <stdio.h>
#define INFINITY 999
#define MAX 10

void bellmanFord(int Graph[MAX][MAX], int n,int s)
{
    int dist[MAX],i,count,u,v; 
    for ( i = 0; i < n; i++)
        dist[i] = INFINITY;
    dist[s] = 0;
    for (count = 0; count < n-1; count++) 
	{
        for (u = 0; u < n; u++) 
		{
            for ( v = 0; v < n; v++) 
			{
                if (Graph[u][v] != 0 && dist[u] != INFINITY && dist[u] + Graph[u][v] < dist[v]) 
                    dist[v] = dist[u] + Graph[u][v];
                
            }
        }
    }

    for ( u = 0; u < n; u++) 
	{
        for (v = 0; v < n; v++) 
		{
            if (Graph[u][v] != 0 && dist[u] != MAX && dist[u] + Graph[u][v] < dist[v])
                printf("Graph contains negative-weight cycle\n");
                return;
        }
    }
    for (i = 0; i < n; i++)
    	if(i!=s)
        printf("\n Distance from %d to %d is %d", s,i, dist[i]);
}

int main() 
{
	int Graph[MAX][MAX],n,s;
	n=4;
	printf("Enter the source: ");
	scanf("%d",&s);
	Graph[0][0]=0;
	Graph[0][1]=-1;
	Graph[0][2]=4;
	Graph[0][3]=0;
	
	Graph[1][0]=0;
	Graph[1][1]=0;
	Graph[1][2]=3;
	Graph[1][3]=2;
	
	Graph[2][0]=0;
	Graph[2][1]=0;
	Graph[2][2]=0;
	Graph[2][3]=0;
	
	Graph[3][0]=0;
	Graph[3][1]=1;
	Graph[3][2]=5;
	Graph[3][3]=0;
	

    bellmanFord(Graph, n,s);

}
