
#include<stdio.h>
int split(int n/*int * array,int size*/){
    //array[size];
    int n1=n;
    int arr[50];
    int a=0;
    while(n!=0){
        arr[a]=n%10;
        a++;
        n=n/10;
    
    }
    printf("the %d has been split : ",n1);
    for(int i=0;i<a;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
}
int even(int n){
    if(n%2==0)printf("%d is a even number..\n",n);
    else printf("%d is a odd number...\n",n);
}
int duplicate(int n){
    int num;
    int dup[10]={0};
    while(n!=0){
        num=n%10;
        dup[num]++;
        n/=10;
    }
    for(int i=0;i<10;i++){
        if(dup[i]>1)
        printf("%d is duplicated %d times...\n",i,dup[i]);
    }
    
        
    

  
}
void main(){
    int n,i;
    printf("enter  number :");
    scanf("%d",&n);
    int arr[100];
    split(n);
    even(n);
    duplicate(n);

    
}
