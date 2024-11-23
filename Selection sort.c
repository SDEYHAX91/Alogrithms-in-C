#include<stdio.h>

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b; 
}

void SelectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){ // Outer loop for no. of passes
        int min = i; //Assuming 1st element as min..
        for(int j = i + 1; j < n; j++){ //Inner loop for finding min.. element in unsorted portion
            if(arr[j] < arr[min])
                min = j;
        }
        if(min != i) //Swapping of minimum element in unsorted portion to element in sorted portion
            swap(&arr[i], &arr[min]);
    }
}

void main(){
    int arr[] = {5,8,7,3,1,9,2}; //Demo..
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
    for(int i = 0; i < n; i++)
        printf("%d  ",arr[i]);
}
