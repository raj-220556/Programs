#include<stdio.h>
int printfAsc(int N){
    if(N==0){
        return 0;
    }
    else{
        printfAsc(N-1);
        printf("%d ",N);
        
    }
}

int printfDsc(int N){
    if(N==0){
        return 0;
    }
    else{
       
        printf("%d ",N);
        return printfDsc(N-1);
    }
}
void main(){

    // b.1toN and N to 1 using recursion
    int n;
    printf("enter the value of N :");
    scanf("%d",&n);
    printf("ascending order of 1 to N :\n");
    printfAsc(n);
    printf("\nDscending order of 1 to N :\n");
    printfDsc(n);

}