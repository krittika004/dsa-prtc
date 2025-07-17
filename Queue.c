//Queue using array
/*#include<stdio.h>
#define MAX 100

int Q[MAX];
int rear=-1,front=-1,i;

void enqueue()
{
	if(rear==MAX-1)
		printf("Queue is overflowed(full)");
	else
	{
		printf("Enter a number: ");
		scanf("%d",&Q[++rear]);
		
		if(front==-1)
			front=0;
	}
}

void dequeue()
{
	if(front==-1)
		printf("Queue is underflowed(empty)");
	else
	{
		printf("Deleted item is %d",Q[front++]);
		
		if(front>rear)
			front=rear=-1;
	}
}

void display()
{
	if(front==-1)
  		printf("Queue is underflowed(empty");
  	else
  	{ 
		for(i=front;i<=rear;i++)
     		printf("%d ",Q[i]);
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
}*/

//Queue using Linklist
/*#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
	struct node *new1;
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	new1=(struct node*)malloc(sizeof(struct node));
	new1->data=x;
	new1->next=NULL;
	
	if(front==NULL && rear==NULL)
		front=rear=new1;
	else
	{
		rear->next=new1;
		rear=new1;
	}
}

void dequeue()
{
	struct node *ptr;
	ptr=front;
	if(front==NULL && rear==NULL)
		printf("Queue doesnot exist");
	else
	{
		printf("Deleted item is %d",ptr->data);
		front=front->next;
		free(ptr);
	}
}

void peek()
{
	if(front==NULL && rear==NULL)
		printf("Queue doesnot exist");
	else
		printf("The peek element is %d ",front->data);
}

void display()
{
	struct node *ptr;
	if(front==NULL && rear==NULL)
		printf("Queue doesnot exist");
		
	else
	{
		ptr=front;
		while(ptr!=NULL)
		{
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
	}
}

void main()
{
	int ch;
	while(1)    //for(;;)
	{
		printf("\n1.Enqueue \n2.Dequeue \n3.Peek \n4.Display \n");
		scanf("%d",&ch);
		switch(ch)
		{
        case 1:enqueue();
			break;
		case 2:dequeue();
			break;
		case 3:peek();
			break;
		case 4:display();
			break;
		default:printf("Wrong choice");
			break;	
		}
	}
}*/

//Queue using stack
#include<stdio.h>
#define MAX 100
int stack1[MAX],stack2[MAX];
int count=0;
int top1=-1,top2=-1;
int stack[MAX];

void push1()
{
	if(top1==MAX-1)
		printf("\nStack is overflow\n");
	else
	{
		printf("Enter a number:");
		scanf("%d",& stack1[++top1]);
	}
}

void push2(int x)
{
	if(top2==MAX-1)  
   		printf("\nStack is overflow\n");   
	else  
	{  
    	top2++;   
    	stack2[top2]=x;   
  	}
}

int pop1()
{
    return stack1[top1--];
}

int pop2()
{
    return stack2[top2--];
}

void enqueue()
{
	int x;
	push1(x);
	count++;
}

void dequeue()
{
	int i,a,b,c;
	if(top1==-1 && top2==-1)
		printf("Queue is empty");
	else
	{
		for(i=0;i<count;i++)
		{
			a=pop1();
			push2(a);
		}
		b=pop2();
		printf("The dequeued element is %d",b);
		printf("\n");
		count--;
		for(i=0;i<count;i++)
		{
			c=pop2();
			push1(c);
		}
	}
}

void display()
{
	int i;
	for(i=0;i<=top1;i++)
		printf("%d ",stack1[i]);
}

int main()
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

		
