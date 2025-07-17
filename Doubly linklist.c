#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next,*prev;
}*head;

void create()
{
	struct node *ptr,*new1;
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	new1=(struct node*)malloc(sizeof(struct node));
	new1->data=x;
	new1->next=NULL;
	new1->prev=NULL;
	
	if(head==NULL)
		head=new1;
		
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next=new1;
			new1->prev=ptr;
	}
}

void display()
{
	struct node *ptr;
	if(head==NULL)
		printf("Link list doesnot exist");
		
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

void insert_beg()
{
	struct node *new1;
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	new1=(struct node*)malloc(sizeof(struct node));
	new1->data=x;
	new1->next=head;
	head->prev=new1;
	head=new1;
}

void delete_beg()
{
	struct node *ptr;
	if(head==NULL)
		printf("Link list doesnot exist");
		
	else
	{
		ptr=head;
		head=ptr->next;
		head->prev=NULL;
		printf("Deleted item is %d",ptr->data);
		free(ptr);
	}
}

void insert_end()
{
	struct node *ptr,*new1;
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	new1=(struct node*)malloc(sizeof(struct node));
	new1->data=x;
	new1->next=NULL;
	new1->prev=NULL;
	
	if(head==NULL)
		head=new1;
		
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next=new1;
			new1->prev=ptr;
	}
}

void delete_end()
{
	struct node *ptr,*ptr1;
	if(head==NULL)
		printf("Link list doesnot exist");
		
	else
	{
		ptr=ptr1=head;
		while(ptr->next!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		if(ptr==ptr1)
			head=NULL;
		else
			ptr1->next=NULL;
		printf("Deleted item is %d",ptr->data);
		free(ptr);
	}	
}

void insert_any_position()
{
	struct node *ptr,*new1;
	int x,pos,c=1;
	printf("Enter a number: ");
	scanf("%d",&x);
	printf("Which position you want to insert?");
	scanf("%d",&pos);
	ptr=head;
	while(ptr->next!=NULL && c<pos-1)
	{
			ptr=ptr->next;
			c++;
	}
	new1=(struct node*)malloc(sizeof(struct node));
	new1->data=x;
	new1->next=ptr->next;
	new1->prev=ptr;
	ptr->next->prev=new1;
	ptr->next=new1;
}

void delete_any_position()
{
	struct node *ptr,*ptr1;
	int pos,c=1;
	printf("Which position you want to delete?");
	scanf("%d",&pos);
	ptr=head;
	while(c<pos && ptr->next!=NULL)
	{
		ptr1=ptr;
		ptr=ptr->next;
		c++;
	}
	ptr->next->prev=ptr1;
	ptr1->next=ptr->next;
	printf("Deleted item is %d",ptr->data);
	free(ptr);
}

void main()
{
	int ch;
	head = NULL;
	while(1)    //for(;;)
	{
		printf("\n1.Create \n2.Display \n3.Insert at beginning \n4.Delete at beginning \n5.Insert at end \n6.Delete at end \n7.Insert at any position \n8.Delete at any position \n");
		scanf("%d",&ch);
		switch(ch)
		{
        case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			insert_beg();
			break;
		case 4:
			delete_beg();
			break;
		case 5:
			insert_end();
			break;
		case 6:
			delete_end();
			break;
		case 7:
			insert_any_position();
			break;
		case 8:
			delete_any_position();
			break;
		default:
			printf("Wrong choice");
			break;	
		}
	}
}
