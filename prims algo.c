// Prim's Algorithm 
/*#include<stdio.h>
#include<stdbool.h>
#define INFINITY 999
#define V 7
int G[V][V] = {
  { 0,28, 0, 0, 0,10, 0},
  {28, 0,16, 0, 0, 0,11},
  { 0,16, 0,12, 0, 0, 0},
  { 0, 0,12, 0,22, 0,18},
  { 0, 0, 0,22, 0,25,24},
  {10, 0, 0, 0,25, 0, 0},
  { 0,11, 0,18,24, 0, 0}};

int main() {
  int no_edge,i,j,selected[V];
  //memset(selected, false, sizeof(selected));
  no_edge = 0;
  selected[0] = true;
  int x; 
  int y; 
  printf("Edge : Weight\n");
  while (no_edge < V - 1) 
{
    int min = INFINITY;
    x = 1;
    y = 1;

    for ( i = 1; i < V; i++)
	{
      if (selected[i]) 
	  {
        for ( j = 1; j < V; j++) 
		{
          if (!selected[j] && G[i][j]) 
		  {  
            if (min > G[i][j]) 
			{
              min = G[i][j];
              x = i;
              y = j;
            }
          }
        }
      }
    }
    printf("%d - %d : %d\n", x, y, G[x][y]);
    selected[y] = true;
    no_edge++;
  }
  return 0;
}*/

#include <stdio.h>
#include <stdbool.h>
#define INFINITY 999
#define V 7 

int minKey(int key[], bool mstSet[]) 
{
    int min = INFINITY, min_index;
	int v;
    for ( v = 1; v < V; v++) 
	{
        if (mstSet[v] == false && key[v] < min) 
		{
            min = key[v];
            min_index = v;
        }
    }

    return min_index;
}

void printMST(int parent[], int graph[V][V])
{ 
	int i;
    printf("Edge   Weight\n");
    for (i = 1; i < V; i++)
        printf("%d - %d    %d \n", parent[i], i, graph[parent[i]][i]);
}

void primMST(int graph[V][V]) 
{
    int parent[V], key[V],j,count=0;    
    bool mstSet[V]; 
    for ( j = 1; j < V; j++) 
	{
        key[j] = INFINITY;
        mstSet[j] = false;
    }
    key[1] =1;     
    parent[0] = 2; 
    for ( count = 1; count < V ; count++) 
	{
        int u,v;
		u = minKey(key, mstSet);
        mstSet[u] = true;
        for ( v = 1; v < V; v++) 
		{
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
			{
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    } 
    printMST(parent, graph);
}
int main() 
{
    int graph[V][V] = {
  { 0,28, 0, 0, 0,10, 0},
  {28, 0,16, 0, 0, 0,11},
  { 0,16, 0,12, 0, 0, 0},
  { 0, 0,12, 0,22, 0,18},
  { 0, 0, 0,22, 0,25,24},
  {10, 0, 0, 0,25, 0, 0},
  { 0,11, 0,18,24, 0, 0}};

    primMST(graph);

    return 0;
}
