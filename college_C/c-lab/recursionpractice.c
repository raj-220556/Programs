#include <stdio.h>
int num(int range){
    if(range==0) return 0;
    num(range-1);
    printf("%d,",range);
    // num(range-1);  //for reverse numbers
}
int mul(int num,int product){
    
    int sum=sum+num;
    if(product==0) {
        printf("%d,",sum);
        return 0;
    }
    
    return mul(num,product-1);
    
}
void main(){
    int n,m;
    printf("enter the number :");
    scanf("%d",&n);
    printf("enter the number :");
    scanf("%d",&m);
    //printing numbers
    //num(n);
    
    //multipilication without *
    mul(n,m);
}
