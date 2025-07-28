#include<stdio.h>
void main(){
    int *p;
    p=fun();
    printf("%d",*p);
}
int *fun(){
    int x=2;
    return &x;
}