#include<stdio.h>
int size = 0;
void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void InsertMaxHeap(int arr[],int val){
    arr[size] = val;
    size++;
    int i = size - 1;
    int parent = (i-1)/2;
    while(i > 0){
        if(arr[parent] < arr[i]){
            swap(&arr[parent], &arr[i]);
            i = parent;
        }else
            return;
    }
}
int main(){
    int heap[100];
    InsertMaxHeap(heap,90);
    InsertMaxHeap(heap,70);
    InsertMaxHeap(heap,50);
    InsertMaxHeap(heap,30);
    InsertMaxHeap(heap,10);
    InsertMaxHeap(heap,60);
    for(int i = 0; i < size; i++)
        printf("%d  ",heap[i]);
    return 0;
}
