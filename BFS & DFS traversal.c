//BFS and DFS traversal
#include<stdio.h>
#define MAX 5
void breadth_first_search(int adj[][MAX],int visited[],int start)
{
	int queue[MAX],rear=-1,front=-1,i,k;
	for(k=0;k<MAX;k++)
		visited[k]=0;
		
	queue[++rear]=start;
	++front;
	visited[start]=1;
	
	while(rear>=front)
	{
		start=queue[front++];
		printf("%c - ",start+65);
		for(i=0;i<MAX;i++)
		{
			if(adj[start][i] && visited[i]==0)
			{
				queue[++rear]=i;
				visited[i]=1;	
			}
		}
	}
}
void depth_first_search(int adj[][MAX],int visited[],int start)
{
	int stack[MAX];
	int top=-1,i,k;
	for(k=0;k<MAX;k++)
		visited[k]=0;
	
	stack[++top]=start;
	visited[start]=1;

	while(top!=-1)
	{
		start=stack[top--];
		printf("%c - ",start+65);
		for(i=0;i<MAX;i++)
		{
			if(adj[start][i] && visited[i]==0)
			{
				stack[++top]=i;
				visited[i]=1;
			}
		}
	}
}

int main()
{
	int visited[MAX]={0};
	int adj[MAX][MAX],i,j;
	int ch,size;
	while(1)
	{
		printf("\n1.Enter the values in graph \n2.BFS traversal \n3.DFS traversal \n");
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the adjacency matrix: \n");
			for(i=0;i<MAX;i++)
				for(j=0;j<MAX;j++)
					scanf("%d",&adj[i][j]);
			break;
			
			case 2:printf("BFS traversal:");
			breadth_first_search(adj,visited,0);
			break;
			
			case 3:printf("DFS traversal:");
			depth_first_search(adj,visited,0);
			break;
			
			default:printf("Wrong choice");
			break;
		}
	}
}
