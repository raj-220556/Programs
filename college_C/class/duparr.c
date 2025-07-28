#include<stdio.h>
#include<limits.h>
int main(){
int n,i,j,count;
printf("enter no.of elements : ");
scanf("%d",&n);
int arr[n];
//SCANING ARRAY
for(int i=0;i<n;i++){
    printf("enter a[%d] element :",i+1);
    scanf("%d",&arr[i]);
}
//PRINTING ARRAY
for(i=0;i<n;i++){
    printf("%d,",arr[i]);
}

int dup[32766]={0};
for(i=0;i<n-1;i++){
    for(j=i+1;j<n-1;j++){
        if(arr[i]==arr[j]){
            dup[arr[i]]++;

        }
    }
    
    
}
for(i=0;i<32766;i++){
    if(dup[arr[i]]>1){
        printf("%d is duplictaed %d times..",arr[i],dup[arr[i]]);
    }
}
}