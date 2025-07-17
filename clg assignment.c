//bubble sort
/*#include<stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubble_sort(int arr[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		if(arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);
	}
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
	int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

//selection sort
#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection_sort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

           if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

//Insertion sort
#include <stdio.h>
#include <math.h>
void insertion_sort(int arr[], int n)
{
    int i,temp, j;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = { 9,5,7,6,8,18 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

//Linear search
#include<stdio.h>
int main() 
{
	int arr[100],n, key, i,j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ",n);
    for (i = 0; i < n; i++)
    	scanf("%d", &arr[i]);
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    for (j= 0; j < n; j++)
		if (arr[j] == key) 
    		break; 
    if (j < n) 
    	printf("The element is found at index %d", j); 
    else
    	printf("Element not found");
    return 0;
}

       
//Binary search
#include <stdio.h>
int main()
{
    int c, f, l, m, n, s, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d integers: ",n);
    for ( c = 0 ; c < n ; c++ )
        scanf("%d",&arr[c]);
    printf("Enter value to search: ");
    scanf("%d",&s);
    f = 0;
    l = n - 1;
    m = (f+l)/2;
    while( f<= l)
    {
        if ( arr[m] < s )
            f= m + 1;
        else if ( arr[m] == s)
        {
            printf("%d found at %d\n", s, m+1);
            break;
        }
        else
            l = m - 1;
        	m = (f+ l)/2;
    }
    if ( f > l )
        printf("Not found %d\n", s);
    return 0;
}

//Matrix add
#include<stdio.h>
int main()
{
	int m,n,i,j;
	int A[100][100],B[100][100],C[100][100];
	printf("Enter the no. of rows of matrix A:");
	scanf("%d",&m);
	printf("Enter the no. of columns of matrix A:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the no.:");
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element A[%d][%d] is :- %d \n",i,j,A[i][j]);
		}
	}
	printf("Enter the no. of rows of matrix B:");
	scanf("%d",&m);
	printf("Enter the no. of columns of matrix B:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the no.:");
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element B[%d][%d] is :- %d \n",i,j,B[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element C[%d][%d] is :- %3d \n",i,j,C[i][j]);
		}
	}
	return 0;
}

//Matrix multiplication
#include<stdio.h>
int main()
{
	int ar,ac,br,bc,i,j,k;
	int A[100][100],B[100][100],C[100][100];
	printf("Enter the no. of rows of matrix A:");
	scanf("%d",&ar);
	printf("Enter the no. of columns of matrix A:");
	scanf("%d",&ac);
	for(i=0;i<ar;i++)
	{
		for(j=0;j<ac;j++)
		{
			printf("Enter the no.:");
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<ar;i++)
	{
		for(j=0;j<ac;j++)
		{
			printf("Element A[%d][%d] is :- %d \n",i,j,A[i][j]);
		}
	}
	printf("Enter the no. of rows of matrix B:");
	scanf("%d",&br);
	printf("Enter the no. of columns of matrix B:");
	scanf("%d",&bc);
	for(i=0;i<br;i++)
	{
		for(j=0;j<bc;j++)
		{
			printf("Enter the no.:");
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<br;i++)
	{
		for(j=0;j<bc;j++)
		{
			printf("Element B[%d][%d] is :- %d \n",i,j,B[i][j]);
		}
	}
	for(i=0;i<ar;i++)
	{
		for(j=0;j<bc;j++)
		{
			C[i][j]=0;
			for(k=0;k<ac;k++)
			{
				C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
			}
		}
	}
	for(i=0;i<ar;i++)
	{
		for(j=0;j<bc;j++)
		{
				printf("Element C[%d][%d] is :- %3d \n",i,j,C[i][j]);
		}
	}
	return 0;
}

//Matrix transpose
#include<stdio.h>
int main()
{
	int m,n,i,j;
	int a[100][100];
	printf("Enter the no. of rows:");
	scanf("%d",&m);
	printf("Enter the no. of columns:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the no.:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element a[%d][%d] is :- %d \n",i,j,a[i][j]);
		}
	}
	printf("The transposed matrix is : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Element a[%d][%d] is :- %3d \n",i,j,a[j][i]);
		}
	}
	return 0;
}*/


