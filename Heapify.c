#include <stdio.h>
int heap[100];
int size = -1;

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to insert an element into the max heap
void InsertMaxHeap(int heap[], int val) {
    size++;
    heap[size] = val; // Add the new value to the end of the heap
    int i = size;

    // Heapify up
    while (i > 0) {
        int parent = (i - 1) / 2;
        if (heap[i] > heap[parent]) {
            swap(&heap[i], &heap[parent]);
            i = parent;
        } else {
            break;
        }
    }
}

int main() {
    int arr[] = {10, 20, 25, 37, 16, 59, 82, 97, 101, 71};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Build the max heap
    for (int i = 0; i < n; i++) {
        InsertMaxHeap(heap, arr[i]);
    }

    // Print the max heap
    for (int i = 0; i <= size; i++) {
        printf("%d ", heap[i]);
    }

    return 0;
}
