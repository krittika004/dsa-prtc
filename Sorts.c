//Merge Sort
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
		merge_sort(arr, l, m);
		merge_sort(arr, m + 1, r);
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

//Quick Sort
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

//Heap Sort
#include <stdio.h>

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
}



