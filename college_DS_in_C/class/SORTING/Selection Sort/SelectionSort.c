// SELECTION SORT
// Taking min element from unsorted part and putting it at the beginning. 
// Repeat until no unsorted part is left

#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[6] = {5,4,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]); // 6 * 4 bytes
    printf("%d",n);
    printf("\nOriginal Array :\n");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    for(int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i+1; j < n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
            
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("\nSorted Array :\n");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}