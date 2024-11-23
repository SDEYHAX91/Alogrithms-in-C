#include<stdio.h>

void InsertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){ 
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp){
                arr[j + 1] = arr[j];
                j--;
            }
        arr[j + 1] = temp;    
    }    
}

int main(){
    int arr[] = {5,8,7,3,1,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    for(int i = 0; i < n; i++)
        printf("%d  ",arr[i]);
    return 0;
}
