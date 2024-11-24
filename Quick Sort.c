#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1; // Start from the next element
    int j = high;
    while (i <= j) {
        while (i <= high && arr[i] <= pivot) 
            i++;
        while (arr[j] > pivot) 
            j--;
        if (i < j) 
            swap(&arr[i], &arr[j]);
    }
    swap(&arr[low], &arr[j]); // Place pivot in the correct position
    return j; // Return the pivot index
}

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = Partition(arr, low, high);
        QuickSort(arr, low, p - 1); // Sort left sub-array
        QuickSort(arr, p + 1, high); // Sort right sub-array
    }
}

int main() { 
    int arr[] = {4, 8, 2, 9, 7, 3, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
