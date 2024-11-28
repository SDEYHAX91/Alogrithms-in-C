#include<stdio.h>

void FindMaxMin(int arr[], int n, int low, int high, int *min, int *max){
    if(low == high) { 
        *max = *min = arr[low];
        return;
    }
    if(low == high - 1){
        if(arr[low] > arr[high]){
            *max = arr[low];
            *min = arr[high];
        }else{
            *min = arr[low];
            *max = arr[high];
        }
        return;
    }
    int mid = (low + high)/2;
    int max1, min1, max2, min2;
    FindMaxMin(arr, n, low, mid, &min1, &max1);
    FindMaxMin(arr, n, mid+1, high, &min2, &max2);

    if(max1 > max2)
        *max = max1;
    else
        *max = max2;
    
    if(min1 < min2)
        *min = min1;
    else
        *min = min2;
}


int main(){
    int arr[] = {6,3,5,11,15,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max, min;
    FindMaxMin(arr, n, 0, n-1, &min, &max);

    printf("Max. value: %d\nMin. value: %d\n",max,min);
    return 0;
}
