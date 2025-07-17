//Polynomial add
/*#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data,expo;
	struct node *next;	
}*head;

void insert()
{
	struct node *head,*new1,*ptr;
	int data,expo,num,ex;
	new1=(struct node*)malloc(sizeof(struct node));
	new1->data=num;
	new1->expo=ex;
	new1->next=NULL;
	
	if(head==NULL || ex>head->expo)
	{
		head=new1;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		new1->next=ptr->next;
		ptr->next=new1;
	}
		
}
void poly_add(struct node *head1,struct node *head2,struct node *head3)
{
	struct node *ptr1,*ptr2,*ptr3;
	ptr1=head1;
	ptr2=head2;
	while(ptr1!=NULL && ptr2!=NULL)
	{
		if(ptr1->expo == ptr2->expo)
		{
			ptr3=insert(ptr1->data+ptr2->data);
			ptr3=head3;
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		else if(ptr1->expo > ptr2->expo)
		{
			ptr3=insert(ptr1->data);
			ptr1=ptr1->next;
		}
		else 
		{
			ptr3=insert(ptr2->data);
			head3->expo=ptr3->next;
			ptr3=head3;
		}		
	}
	while(ptr1!=NULL)
	{
		ptr3=insert(ptr1->data);
		ptr1=ptr1->next;
	}
	while(ptr2!=NULL)
	{
		ptr3=insert(ptr2->data);
		ptr2=ptr2->next;
	}
	printf("Added polynomial is: ",head3);
}

void main()
{
	struct node *head1=NULL;
	struct node *head2=NULL;
	printf("Enter the first polynomial: \n");
	printf("Enter the second polynomial: \n");
	poly_add();
}*/

//Merge 2 singly linklist without using 3rd one
/*#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
}*head1,*head2;

void create_list1()
{
	struct node *ptr,*new1;
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	new1=(struct node*)malloc(sizeof(struct node));
	new1->data=x;
	new1->next=NULL;
	if(head1==NULL)
		head1=new1;
	else
	{
		ptr=head1;
		while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next=new1;
	}
}

void create_list2()
{
	struct node *ptr,*new1;
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	new1=(struct node*)malloc(sizeof(struct node));
	new1->data=x;
	new1->next=NULL;
	if(head2==NULL)
		head2=new1;
	else
	{
		ptr=head2;
		while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next=new1;
	}
}

void display_list1()
{
	struct node *ptr;
	if(head1==NULL)
		printf("Link list doesnot exist");
	else
	{
	while(ptr!=NULL)
		{
			printf("%d",ptr->data);
			ptr=ptr->next;
		}
	}
}

void display_list2()
{
	struct node *ptr;
	if(head2==NULL)
		printf("Link list doesnot exist");
	else
	{
	while(ptr!=NULL)
		{
			printf("%d",ptr->data);
			ptr=ptr->next;
		}
	}
}

int  merge()
{
	struct node *head1,*head2;
	if (!head1)
		return head2;
	if (!head2)
		return head1;

	if (head1->data < head2->data) 
	{
		head1->next=merge(head1->next,head2);
		return head1;
	}
	else 
	{
		head2->next=merge(head1,head2->next);
		return head2;
	}
}

void main()
{
	int ch;
	while(1)    //for(;;)
	{
		printf("1.Create 1st list \n2.Create 2nd list \n3.Display 1st list \n4.Display 2nd list \n5.Merge \n");
		scanf("%d",&ch);
		switch(ch)
		{
        case 1:create_list1();
				break;
		case 2:create_list2();
				break;
		case 3:display_list1();
				break;
		case 4:display_list2();
				break;
		case 5:merge();
				break;
		default:printf("Wrong choice");
				break;	
		}
	}
}*/




