


#include <stdio.h>

void CountingSort(int * arr, int n, int pos){
    int count[10] = {0};

    for(int i = 0; i < n; i++){
        count[(arr[i]/pos)%10]++;
    }

    for(int i = 1; i < 10; i++){
        count[i] = count[i] + count[i - 1];
    }

    int temp[n];
    for(int i = n-1; i >= 0; i--){
        temp[--count[(arr[i]/pos)%10]] = arr[i];
    }

    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
    }

}

void RadixSort(int *arr, int n){

    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    int digits = 0;
    while(max != 0){
        digits++;
        max /= 10;
    }
    int pos = 1;
    for(int i = 0; i < digits; i++){
        CountingSort(arr, n, pos);
        pos *= 10;
    }
}

int main(){
    int n = 6;
    int arr[] = {543, 767, 243,8, 91, 123}; 

    printf("\nOriginal Array :\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]); 
    }

    printf("\nSorted Array :\n");

    RadixSort(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}