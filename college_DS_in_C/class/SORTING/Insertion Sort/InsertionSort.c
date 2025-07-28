// Insertion Sort
// Inserion sort means array divided into two parts sorted part and Unsorted part
// In each iteration we take one element from unsorted part and insert it into sorted part
// by checking Right to left <- place where it should be smaller than previous
// Time complexity of insertion sort is O(n^2) in worst case
// Space complexity of insertion sort is O(1) as it only uses a constant amount of space


#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[6] = {9,1,4,-9,4,2};
    int n = 6;

    printf("Original Array :\n");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    // Tried one not Original
    // for(int i = 1; i < n; i++){
    //     for(int j = 0; j < i; j++ ){
    //         if(arr[j] > arr[i]){
    //             int temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //     }
    // }

    // Insertion Sorting
    for(int i = 0; i < n; i++){
        int index = i+1;
        while(index > 0 && arr[index - 1] > arr[index]){
            int temp = arr[index - 1];
            arr[index - 1] = arr[index];
            arr[index] = temp;
            index--;
         }       
    }
    printf("\nSorted Array :\n");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}