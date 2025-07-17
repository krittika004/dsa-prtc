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
}*/

//quick sort
/*#include<stdio.h>

void swap(int*xp,int*yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int partition(int arr[],int lb,int ub)
{
	int pivot=arr[lb];
	int start=lb;
	int end=ub;
	
	while(start<end)
	{
		while(arr[start]<pivot)
			start++;
		while(arr[end]>pivot)
			end--;
		if(start<end)
			swap(&arr[start],&arr[end]);
	}
	swap(&arr[lb],&arr[end]);
	return end;
}

void quick_sort(int arr[],int lb,int ub)
{
	if(lb<ub)
	{
		int loc=partition(arr,lb,ub);
		quick_sort(arr,lb,loc-1);
		quick_sort(arr,loc+1,ub);
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
    quick_sort(arr,0,n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}*/

/*#include <stdio.h>
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int l, int h)
{
	int x = arr[h];
	int i = (l - 1);
	int j;
	for(j = l; j <= h - 1; j++) 
	{
		if (arr[j] <= x) 
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[h]);
	return (i + 1);
}

void quick_sort(int arr[], int l, int h)
{
	int stack[h - l + 1];
	int top = -1;
	stack[++top] = l;
	stack[++top] = h;
	while (top >= 0) 
	{
		h = stack[top--];
		l = stack[top--];
		int p = partition(arr, l, h);
		if (p - 1 > l) 
		{
			stack[++top] = l;
			stack[++top] = p - 1;
		}
		if (p + 1 < h) 
		{
			stack[++top] = p + 1;
			stack[++top] = h;
		}
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; ++i)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[] = {7,6,10,5,9,2,1,15,7 };
	int n = sizeof(arr) / sizeof(*arr);
	quick_sort(arr, 0, n - 1);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}*/

//merge sort
/*#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2) 
	{
		if (L[i] <= R[j]) 
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) 
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) 
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(int arr[], int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 15,5,24,8,1,3,16,10,20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	merge_sort(arr, 0, n - 1);
	printf("Sorted array : \n");
	printArray(arr, n);
	return 0;
}*/

//heap sort
/*#include <stdio.h>

void swap(int* a, int* b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int arr[], int n, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && arr[left] > arr[largest])
		largest = left;
	if (right < n && arr[right] > arr[largest])
		largest = right;
	if (largest != i) 
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, n, largest);
	}
}

void heap_sort(int arr[], int n)
{
	int i;
	for ( i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);
	for (i = n - 1; i >= 0; i--) 
	{
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int n)
{
	int i;
	for ( i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	int arr[] = { 15,20,7,9,30 };
	int n = sizeof(arr) / sizeof(arr[0]);
	heap_sort(arr, n);
	printf("Sorted array is\n");
	printArray(arr, n);
}*/

//radix sort
#include <stdio.h>
int getMax(int arr[], int n)
{
	int i;
	int mx = arr[0];
	for (i = 1; i < n; i++)
		if (arr[i] > mx)
			mx = arr[i];
	return mx;
}

void countSort(int arr[], int n, int exp)
{
	int output[n];
	int i, count[10] = { 0 };
	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	for (i = n - 1; i >= 0; i--) 
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}
	for (i = 0; i < n; i++)
		arr[i] = output[i];
}

void radix_sort(int arr[], int n)
{
	int exp;
	int m = getMax(arr, n);
	for (exp = 1; m / exp > 0; exp *= 10)
		countSort(arr, n, exp);
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
}
int main()
{
	int arr[] = {15,1,321,10,802,2,123,90,109};
	int n = sizeof(arr) / sizeof(arr[0]);
	radix_sort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}

