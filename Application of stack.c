#include<stdio.h>
#define MAX 5
int top=-1,i,j,sum;
int stack[MAX];

int asteriod_collision()
{
	for(i=0;i>=MAX;i++)
	{
		while(!stack.empty() && i<0 && stack.top()>0)
		{
			sum=i+stack.top();
			if(sum<0)
				stack.pop()
			else if(sum>0)
			{
				i=0;
				break;
			}
			else
			{
				stack.pop();
				i=0;
			}
			if(i!=0)
			{
				stack.push(a);
			}
			j=MAX-1;
			while(!stack.empty())
			{
				
			}		
		}
	}
}
