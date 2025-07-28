

#include <stdio.h>

void ShellSort(int *arr, int n){
    for(int gap = n/2; gap >= 1; gap /= 2){
        for(int j = gap; j < n ; j++){
            for(int i = j-gap ; i >= 0 ; i -= gap){
                if(arr[i] < arr[i + gap]){
                    break;
                }else{
                    int temp = arr[i];
                    arr[i] = arr[i+gap];
                    arr[i+gap] = temp;
                }
            }
        }
    }

}

int main(){
    int arr[] = {10,2,35,6,43,21,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array :\n");
    for(int i = 0; i< n ; i++){
        printf("%d ", arr[i]);
    }

    ShellSort(arr, n);

    printf("\nSorted Array :\n");
    for(int i = 0; i < n ; i++){
        printf("%d ", arr[i]);
    }
}
