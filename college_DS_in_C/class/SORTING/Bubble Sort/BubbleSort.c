// Bubbble Sort means  swaping element by side by side

#include<stdio.h>
#include <stdbool.h>

void display(){

}
void bubbleSort(){

}
int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5;

    printf("Original Array:\n");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    // Bubble Sort
    // for(int i = 0; i < n-1; i++){
    //     for(int j = 0; j < n-1; j++){
    //         if(arr[j] > arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }

    // // // Advance Bubble Sort
    // for(int i = 0; i < n-1; i++){
    //     for(int j = 0; j < n-1-i; j++){
    //         if(arr[j] > arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }
 
    for(int i = 0; i < n-1; i++){
       bool isSorted = true;
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                isSorted = false;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(isSorted){
            
            break;
        }

    }
    printf("\nSorted Array:\n");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}