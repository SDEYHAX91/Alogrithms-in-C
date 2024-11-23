#include<stdio.h>

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b; 
}

void BubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){ //Outer Loop for Pass
        for(int j = 0; j < n - 1 - i; j++){ //Inner Loop for comparisons
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void main(){
    int arr[] = {5,8,7,3,1,9,2}; //Demo
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
    for(int i = 0; i < n; i++)
        printf("%d  ",arr[i]);
}
