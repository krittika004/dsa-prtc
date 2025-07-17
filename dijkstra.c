//Dijkstra algorithm
/*#include<stdio.h>
#include<stdlib.h>
#define infinity 999
void dijkstra(int n,int s,int Graph[10][10],int cost[10][10],int dist[10])
{
	int i,v,count=1,min,visited[10];
	for(i=0;i<n;i++)
	{
		visited[i]=0;
		dist[i]=cost[s][i];
	}
	visited[s]=1;
	dist[s]=0;
	while(count<=n)
	{
		min=infinity;
		for(i=0;i<n;i++)
		{
			if(dist[i]<min && visited[i]==0)
			{
				min=dist[i];
				v=i;	
			}
			visited[v]=1;
			count++;
			for(i=0;i<n;i++)
			{
				if(dist[i]>dist[v]+cost[v][i])
					dist[i]=dist[v]+cost[v][i];
			}
		}
	}
}

int main()
{
	int i,j,n,s,cost[10][10],Graph[10][10],dist[10];
	printf("Enter the number of nodes:");
	scanf("%d",&n);
	printf("The cost matrix: \n");
	for (i = 0; i < n; i++)
	{
    	for (j = 0; j < n; j++)
      		if (Graph[i][j] == 0)
        		cost[i][j] = infinity;
     		else
        		cost[i][j] = Graph[i][j];
    }
	printf("Enter the source vertex: ");
	scanf("%d",&s);
	dijkstra(n,s,cost,Graph,dist);
	printf("The shortest path from %d is : \n",s);
	for(i=0;i<n;i++)
	{
		if(s!=0)
			printf("%d -> %d = %d \n",s,i,dist[i]);
	}
}*/


#include <stdio.h>
#define INFINITY 9999
#define MAX 10

void Dijkstra(int Graph[MAX][MAX], int n, int start) 
{
  int cost[MAX][MAX], distance[MAX], pred[MAX];
  int visited[MAX], count, min_distance, next_node, i, j;

  
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (Graph[i][j] == 0)
        cost[i][j] = INFINITY;
      else
        cost[i][j] = Graph[i][j];

  for (i = 0; i < n; i++) 
  {
    distance[i] = cost[start][i];
    pred[i] = start;
    visited[i] = 0;
  }

  distance[start] = 0;
  visited[start] = 1;
  count = 1;

  while (count < n - 1) {
    min_distance = INFINITY;

    for (i = 0; i < n; i++)
      if (distance[i] < min_distance && !visited[i]) {
        min_distance = distance[i];
        next_node = i;
      }

    visited[next_node] = 1;
    for (i = 0; i < n; i++)
      if (!visited[i])
        if (min_distance + cost[next_node][i] < distance[i]) 
		{
          distance[i] = min_distance + cost[next_node][i];
          pred[i] = next_node;
        }
    count++;
  }

  for (i = 0; i < n; i++)
    if (i != start)
	{
      printf("\nDistance from %d to %d: %d",start, i, distance[i]);
    }
}
int main() 
{
  int Graph[MAX][MAX], i, j, n, s;
  n = 4;
  printf("Enter the source vertex: ");
	scanf("%d",&s);
  Graph[0][0] = 0;
  Graph[0][1] = 0;
  Graph[0][2] = 1;
  Graph[0][3] = 2;
  

  Graph[1][0] = 0;
  Graph[1][1] = 0;
  Graph[1][2] = 2;
  Graph[1][3] = 0;
  

  Graph[2][0] = 1;
  Graph[2][1] = 2;
  Graph[2][2] = 0;
  Graph[2][3] = 1;
  

  Graph[3][0] = 2;
  Graph[3][1] = 0;
  Graph[3][2] = 1;
  Graph[3][3] = 0;
  

  
  Dijkstra(Graph, n, s);

  return 0;
}
