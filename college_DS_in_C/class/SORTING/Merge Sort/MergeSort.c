// Merge Sort It works Based on recursions it follows the divide and conquer approach
// while dividing the array into two halves, until we have subarrays of size 1
// then we merge them back together in sorted order
// it has a time complexity of O(n log n) and a space complexity of O(n)
// we are playing only with indexs and recursions are follow PostOrder (left - right - merge)


#include <stdio.h>

void Combine(int *arr, int start, int mid, int end){
    int tempsize = end - start + 1;
    int temp[tempsize];
    int k = 0;  //temp array traversing element
    int i = start;
    int j = mid + 1;
    
    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i <= mid){
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= end){
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(int i = start; i <= end; i++){
        arr[i] = temp[i - start];
    }
}

void MergeSort(int* arr, int start, int end){
    if(start >= end){
        return;
    }
    
    int mid = (start+end)/2;

    MergeSort(arr, start, mid);
    MergeSort(arr, mid+1, end);
    Combine(arr, start, mid, end);
}

void main(){
    int arr[] = {8,7,6,5,4,3,2,9,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Oringinal Array :\n");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    MergeSort(arr, 0, n-1);

    printf("\nSorted Array :\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }


}