//linear search

#include<stdio.h>
int linearSearch(int arr[], int size ,int element){

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element){
            return i;
        }
    }
    return -1;
}

//binary search  (array has to sorted for binary search)

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
int main(){
    //unsorted array for linear search
   // int arr[]={1,3,5,16,6,3,48,9,5};
    //int size = sizeof(arr)/sizeof(int);


    //sorted array for binary search
    int arr[]={1,3,5,16,26,33,48,59,75};
    int size = sizeof(arr)/sizeof(int);
    int element=3;
    //int searchIndex=linearSearch(arr, size, element);
    //printf("the element %d was found at index %d \n",element,searchIndex);
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    
    
    return 0;
}