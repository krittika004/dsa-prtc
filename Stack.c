//Stack using array
/*#include<stdio.h>
#define max 5
int top=-1,i;
int stack[max];

void push()
{
	if(top==max-1)
		printf("Overflow");
	else
	{
		printf("Enter a number:");
		scanf("%d",& stack[++top]);
	}
}

void pop()
{
    if(top == -1)
		printf("Stack is underflow");
    else
    {
        printf("Stack element that is popped is %d",stack[top--]);
    }
}

void peek()
{
	if(top == -1)   
    {  
        printf("Stack is underflow");     
    }  
    else  
    {  
        printf("The top element is %d",stack[top]);  
    }  	
}

void display()
{ 
	if(top==-1)
	printf("The stack is underflow:");
	else
	{
		printf("Print the stack: ");
		for(i=0;i<=top;i++)
  		{ 
			printf("%d ",stack[i]);
		}
	}
}

void main()
{
	int ch;
	while(1)    //for(;;)
	{
		printf("\n1.Push \n2.Pop \n3.Peek \n4.Display \n");
		scanf("%d",&ch);
		switch(ch)
		{
        case 1:push();
			   break;
		case 2:pop();
			   break;
		case 3:peek();
				break;
		case 4:display();
			   break;
		default:
			printf("Wrong choice");
			break;	
		}
	}
}*/

//Stack using linklist
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head = NULL;

void push()
{ 
	struct node *new1;
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	new1=(struct node*)malloc(sizeof(struct node));
	new1->data=x;
	new1->next=head;
	head=new1;
}

void pop()
{
	struct node *ptr;
	if(head==NULL)
		printf("Stack is empty");	
	else
	{
		ptr=head;
		head=ptr->next;
		printf("Popped item is %d",ptr->data);
		free(ptr);
	} 
}

void display()
{
	struct node *ptr;
	if(head==NULL)
		printf("Stack doesnot exist");
		
	else
	{
		ptr=head;
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
	head = NULL;
	while(1)    //for(;;)
	{
		printf("\n1.Push \n2.Pop \n3.Display \n");
		scanf("%d",&ch);
		switch(ch)
		{
        case 1:push();
			break;
		case 2:pop();
			break;
		case 3:display();
			break;
		default:printf("Wrong choice");
			break;	
		}
	}
}

//Parenthesis matching using stack
/*#include <stdio.h>
#include<string.h>
#define max 100

int top=-1,i;
char stack[max];

void push()
{
	if(top==max-1)
		printf("Overflow");
	else
	{
		printf("Enter a number:");
		scanf("%d",& stack[++top]);
	}
}

char pop()
{
    if(top == -1)
		printf("Underflow");
    else
    {
        printf("Stack element that is popped is %d",stack[top--]);
    }
}
    
int matching_pair() 
{
	char char1,char2;
    if (char1 == '(' && char2 == ')') 
        return 1;
	else if (char1 == '[' && char2 == ']') 
        return 1;
	else if (char1 == '{' && char2 == '}') 
        return 1;
	else 
        return 0;
}

int balanced() 
{
	char *text;
    int i;
    for (i = 0; i < strlen(text); i++) 
	{
        if (text[i] == '(' || text[i] == '[' || text[i] == '{') 
		{
            push(text[i]);
        }
		else if (text[i] == ')' || text[i] == ']' || text[i] == '}') 
		{
            if (matching_pair(pop(text[i]))) 
                return 0; 
			else if (top == -1)  
                return 0;
        }
    }
    if (top == -1)
        return 1;
	else
        return 0;
}

void main() {
	char text[max];
	printf("Enter an expression in parentheses: ");
	scanf("%s", text);
	if (balanced(text)) 
	{
       printf("The expression is balanced.\n");
    } 
	else 
	{
       printf("The expression is not balanced.\n");
	}
}*/

/*#include<stdio.h>
#define MAX 100
int top=-1,i;
char op;
int stack[MAX];

int evaluation(char *exp)
{
	stack[top-2]=stack[top-2] op stack[top-1];
	top=top-2;
}

int main()
{
	char exp[] = "52+";
    printf("postfix evaluation: %d", evaluation(exp));
    return 0;
}*/

//tower of hanoi
/*#include<stdio.h>
void tower(int n,char source,char temp,char dest)
{
	if(n<=0)
	{
		printf("Illegal entry");
	}
	else if(n==1)
	{
	    printf("\nMove the disc from %c to %c ",source,dest);
	}
	else
	{
		tower(n-1,source,dest,temp);
		tower(1,source,temp,dest);
		tower(n-1,temp,source,dest);
	}
}
void main()
{
	int n;
	char a,b,c;
	printf("Enter the number of disc:");
	scanf("%d",&n);
	printf("The tower of hanoi of %d disc is \n",n);
	tower(n,'a','b','c');
}*/
