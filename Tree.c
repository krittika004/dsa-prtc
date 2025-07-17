#include <stdio.h>  
#include <stdlib.h>  
  
struct node
{  
  int data;  
  struct node *right,*left;  
}*root;  
  
int create()
{  
	int x;
  	struct node *new1;  
  	new1 = (struct node*)malloc(sizeof(struct node));  
  	new1->data = x;  
 	new1->left = NULL;  
  	new1->right = NULL;  
  
  	return new1;  
}  

int insert()
{
	int x;  
  if (root == NULL)  
    return new_node(x);  
  else if (x > root->data)  
    root->right = insert(root->right, x);  
  else   
    root -> left = insert(root->left, x);  
  return root;  
}  
 
 
int delete() 
{
	int x;  
  
  if (root == NULL)  
    return NULL;  
  if (x > root->data)  
    root->right= delete(root->right, x);  
  else if (x < root->data)  
    root->left = delete(root->left, x);  
  else {  
    if (root->left == NULL && root->right == NULL){  
      free(root);  
      return NULL;  
    }  
    else if (root->left == NULL || root->right == NULL){  
      struct node *new1;  
      if (root->left == NULL)  
        new1 = root->right;  
      else  
        new1 = root->left;  
      free(root);  
      return new1;  
    }  
    else {  
      struct node *new1 = find_minimum(root->right);  
      root->data = new1->data;  
      root->right = delete(root->right, new1->data);  
    }  
  }  
  return root;  
}  

void search()
{ 
	int x;
  if (root == NULL || root->data == x)  
    return root;  
  else if (x > root->data)  
    return search(root->right, x);  
  else  
    return search(root->left, x);  
}  
  
int main() 
{  
  int ch;
	while(1)    //for(;;)
	{
		printf("\n1.Create \n2.Insert  \n3.Delete  \n4.Search \n");
		scanf("%d",&ch);
		switch(ch)
		{
        case 1:
			create();
			break;
		case 2:
			insert();
			break;
		case 3:
			delete();
			break;
		case 4:
			search();
			break;
		default:
			printf("Wrong choice");
			break;	
		}
	}
}  
