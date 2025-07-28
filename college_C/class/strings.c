#include <stdio.h>
#include <string.h>
int main(){
    // 1...strlen()
    // int n=0,i;
    // char str1[10000];
    // printf("enter the string : ");

    // gets(str1); 
    // // scanf("%[^\n]s",str1);

    // printf("%s\n",str1);
    // char str2[] = "welcome";
    // // length of a string by using manual and predefined
    // int a = strlen(str1); 
    // printf("%d",a);

    // // manually finding length of string
    // // for(i=0;str1[i]!='\0';i++){
    // //     n++;
    // // }

    // while(str1[i]>0){
    //     n++;
    //     i++;
    // }
    // printf("\n%d",n);

    // 2....strcpy()
    char str1[1000];
    char str2[1000];
    printf("enter the string : ");
    scanf("%[^\n]s",str1);
    for (int i=0;str1!='\0';i++){
        str2[i] = str1[i];
    }
    printf ("entered string : %s",str1);
    printf ("copied string manualy : %s",str2);
    printf ("copied string by function : %s",strcpy(str2,str1));
    







} 