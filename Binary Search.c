#include<stdio.h>

int BinarySearch(int arr[],int n,int target){
    int left=0;
    int right=n-1;
    
    while(left<=right){
        int mid = (left + right)/2;
        if(target == arr[mid])
            return mid;
        else if(target > arr[mid])
            left = mid + 1;
        else
            right = mid - 1;
        }    
    return -1;            
    }
 
 int main(){
     int arr[]={1,2,3,4,5,6,7,8,9};
     int target = 7;
     int size = sizeof(arr)/sizeof(arr[0]);
     int r = BinarySearch(arr,size,target);
     if(r==-1)
         printf("Target not found.\n");
     else
         printf("Target is at index %d.\n",r);
     return 0;
     }    