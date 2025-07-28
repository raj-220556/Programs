
#include <stdio.h>

void CountingSort(int * arr, int n){
    int count[10] = {0};

    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }

    for(int i = 1; i < 10; i++){
        count[i] = count[i] + count[i - 1];
    }

    int temp[n];
    for(int i = n-1; i >= 0; i--){
        temp[--count[arr[i]]] = arr[i];
    }

    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
    }

}

int main(){
    int n = 6;
    int arr[] = {7, 6, 5, 4, 3, 2}; 

    printf("\nOriginal Array :\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]); 
    }

    printf("\nSorted Array :\n");

    CountingSort(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}