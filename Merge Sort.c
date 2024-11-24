#include<stdio.h>

void Merge(int arr[],int left,int mid,int right){ //Sort sub-array of elements and combine them into final sorted array
    int i,j,k;
    int n1 = mid + 1 - left;
    int n2 = right - mid;
    int a[n1],b[n2];

    for(i = 0; i < n1; i++)
        a[i] = arr[left + i];
    for(j = 0; j < n2; j++)
        b[j] = arr[mid + 1 + j];
    
    i = j = 0;
    k = left;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]) {  
            arr[k] = a[i];
            i++;
        }else if(a[i] > b[j]){
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = b[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[],int left,int right){ //Divide array into sub-array of n elements
    if(left < right){
        int mid = (left + right)/2;
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);
        Merge(arr,left,mid,right);
    }
}

int main(){
    int arr[] = {34,57,93,101,2,1,7,4,45,76,58,69,88,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr,0,n-1);
    for(int i = 0; i < n; i++)
        printf(" %d  ",arr[i]);
}
