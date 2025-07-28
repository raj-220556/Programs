#include <stdio.h>

// Function to partition the array into two halves
int Partion(int* arr, int lower, int higher){
  int pivot = arr[lower];
  int i = lower + 1;
  int j = higher;
  int temp;
  while(i < j){
    while(i<=higher && arr[i] <= pivot){
        i++;
    }
    while(j >= lower && arr[j] > pivot){
        j--;
    }
    if(i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = arr[i];
    }
  }

  // j value is staying in middle Ex : 5321  'i' is increasing but j not
  // so is j used to swap pivot elemenet
  temp = arr[lower];
  arr[lower] = arr[j];
  arr[j] = temp;

  return j;
}

// Function to perform QuickSort
void QuickSort(int *arr, int lower, int higher){
    int partitionIndex;
    if(lower < higher){ // Check if there are elements to sort
        partitionIndex = Partion(arr, lower, higher); // Partition the array
        QuickSort(arr, lower, partitionIndex - 1); // Recursively sort the left half
        QuickSort(arr, partitionIndex + 1, higher); // Recursively sort the right half
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

    QuickSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
