#include<stdio.h>

int LinearSearch(int arr[],int n,int target){
    for(int i = 0; i < n; i++){
        if(target == arr[i])
            return i;
    }
    return -1;
}

void main(){
    int arr[] = {4,8,2,9,7,3,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    int r = LinearSearch(arr,n,target);
    if(r == -1)
        printf("Target not found.\n");
    else
        printf("Target is found at index %d.\n",r);
}
