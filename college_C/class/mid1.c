#include<stdio.h>
int main(){
    //print prime number in a triangle
    int n,i,j,k;
    int num=2;
    printf("enter the no.of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<n-i+1;k++){
            printf("  ");
        }
        for(j=1;j<=(2*i-1);j++){
            //printf("* ");
            int pirme=1;
            for(int p=2;p<num;p++){
                if(num%p==0){
                    pirme=0;
                    
                    break;
                }

            }
            if(pirme)
            printf("%d ",num);
            num++;
                      
        }
        printf("\n");
    }























}