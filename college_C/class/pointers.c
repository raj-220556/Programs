#include<stdio.h>
void main(){
    double n;
    double *p;
    p=&n;
    printf("%u,%p,%x",p,p,p);
}