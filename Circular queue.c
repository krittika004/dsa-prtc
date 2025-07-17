#include<stdio.h>
#define MAX 5

int Q[MAX];
int rear=-1,front=-1,i;

void enqueue()
{
	if((rear+1)%MAX==front)
		printf("Queue is overflowed(full)");
	else
	{
		int x;
		printf("Enter a number: ");
		scanf("%d",&x);
		if(front==-1 && rear==-1)
			{
				front=rear=0;
				Q[rear]=x;
			}
		else
		{
			rear=(rear+1)%MAX;
			Q[rear]=x;
		}
	}
}

int dequeue()
{
	if(front==-1)
		printf("Queue is underflowed(empty)");
	else
	{
		if(front==rear)
			front=rear=-1;
			
		else
		{
				printf("Deleted item is %d",Q[front]);
				front=(front+1)%MAX;
		}
	}
}

void display()
{
	int i=front;
	if(front==-1)
  		printf("Queue is underflowed(empty)");
  	else
  	{ 
  		printf("Queue is : ");
  		while(i!=rear)
  		{
		 	printf("%d ",Q[i]);
  			i=(i+1)%MAX;
  		}
  		printf("%d ",Q[rear]);
	}	
}
		
void main()
{
	int ch;
	while(1)    //for(;;)
	{
		printf("\n1.Enqueue \n2.Dequeue \n3.Display \n");
		scanf("%d",&ch);
		switch(ch)
		{
        	case 1:enqueue();
				break;
			case 2:dequeue();
				break;
			case 3:display();
				break;
			default:printf("Wrong choice");
				break;	
		}
	}
}
