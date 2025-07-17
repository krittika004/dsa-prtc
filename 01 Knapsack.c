//0-1 Knapsack
#include<stdio.h>
int max(int a, int b) 
{ 
	return (a > b)? a : b; 
}
int knapSack(int W, int weight[], int profit[], int n)
{
	if (n == 0 || W == 0) 
		return 0;
	if (weight[n-1] > W)
		return knapSack(W, weight, profit, n-1);
	else 
		return max( profit[n-1] + knapSack(W-weight[n-1], weight, profit, n-1), knapSack(W, weight, profit, n-1));
}
int main()
{
	int n,i,W;
	printf("\nEnter the number of items : ");
	scanf("%d", &n);
	int profit[n];
	int weight[n];
	printf("\nEnter the item's profit and its weight  \n");
	for(i = 0; i < n; i++)
		scanf("%d %d", &profit[i], &weight[i]);
	printf("\nEnter the capacity of the knapsack : ");
	scanf("%d", &W);
	printf("\nMaximum value in a 0-1 knapsack : %d\n", knapSack(W,  weight,profit, n));
	return 0;
}
