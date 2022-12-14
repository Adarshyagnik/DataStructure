#include<stdio.h>
//traversal   sabh element ko ek baar visit
void display(int arr[], int n){
    for (int i =0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }

}

int main(){
    int arr[100] = {1,2,6,50};
    display(arr,4);




    return 0;
}