//read and display 1D array
/*#include<stdio.h>
int main()
{
	int n,i;
	int a[100];
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the no.");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("The element %d is :- %d \n",i+1,a[i]);
	}
	return 0;
}*/

//Mean of array
/*#include<stdio.h>
int main()
{
	int n,i,sum,mean;
	sum=0;
	int a[100];
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the no.");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum is %d \n",sum);
	mean=sum/i;
	printf("The mean is %d \n",mean);
	return 0;
}*/

//print position of smallest no.
/*#include<stdio.h>
int main()
{
	int n,i,small,pos;
	int a[100];
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the no.");
		scanf("%d",&a[i]);
	}
	small=a[0];
	pos=0;
	for(i=1;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			pos=i;
		}
	}
	printf("The smallest element is : %d \n",small);
	printf("The position of the smallest element in the array is : %d \n",pos);
	return 0;
}*/
	
//find second largest
/*#include<stdio.h>
int main()
{
	int n,i,large,second_large;
	int a[100];
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the no.");
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
			large=a[i];
	}
	second_large=a[1];
	for(i=1;i<n;i++)
	{
		if(a[i]!=large)
		{
			if(a[i]>second_large)
			second_large=a[i];
		}
	}
	printf("The no.s entered are : ");
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
	printf("\nThe largest element is : %d \n",large);
	printf("The second largest element in the array is : %d \n",second_large);
	return 0;
}*/

//find duplicate no
/*#include<stdio.h>
int  main()
{
	int i,j,n, dup=0, dupn=0 ;
	int a[100];
	printf("Enter the no.s of elements: ");
	scanf("%d ",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the no.");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		dup=0;
		for (j=i;j<=n;j++)
		{
			if ( a[j] <= a[i] )
				dup=dup+1;
		}
		if (dup>1)
		{
		printf("\n%d is a dublicate element.",a[i]) ;
		dupn=1 ;
		}
	}
	if (dupn==0)
	printf("\n There is no dublicate element. ") ;
	return 0 ;
}*/	

//insert at a given location
/*#include <stdio.h>
int main()
{
   int pos,n,val,i;
   int a[100];
   printf("Enter the no.s of elements: ") ;
   scanf("%d", &n);
   for(i=0;i<n;i++)
	{
		printf("Enter the no.");
		scanf("%d",&a[i]);
	}
	printf("Enter the position to insert the element : ");
   	scanf("%d", &pos);
 	printf("Enter the value to insert: ");
   	scanf("%d", &val);
 	for (i=n-1;i>=pos-1;i--)
      	a[i+1] = a[i]; 
	a[pos-1]=val;
   	printf("Resultant array is : \n");
   	for (i=0;i<=n;i++)
      	printf("%d ", a[i]);
 	return 0;
}*/

//delete at a given location
#include <stdio.h>
int main()
{
   int pos,n,val,i;
   int a[100];
   printf("Enter the no.s of elements: ") ;
   scanf("%d", &n);
   for(i=0;i<n;i++)
	{
		printf("Enter the no.");
		scanf("%d",&a[i]);
	}
	printf("Enter the position to insert the element : ");
   	scanf("%d", &pos);
   	

//read and display 2D array
/*#include<stdio.h>
int main()
{
	int a,b,i,j;
	int n[100][100];
	printf("Enter the no. of rows:");
	scanf("%d",&a);
	printf("Enter the no. of columns:");
	scanf("%d",&b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Enter the no.:");
			scanf("%d",&n[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Element n[%d][%d] is :- %d \n",i,j,n[i][j]);
		}
	}
	return 0;
}*/
