//creating a single linked list

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    
    struct node *start = NULL;
    struct node *p = NULL;

    for (int i = 1; i <= n; i++) {
        struct node *temp = (struct node *)malloc(sizeof(struct node)); // Allocate memory
        if (temp == NULL) {
            printf("Memory allocation failed\n");
            return 1; // Exit if memory allocation fails
        }
        
        int data;
        printf("Enter the %d node data: ", i);
        scanf("%d", &data);
        temp->data = data;
        temp->next = NULL;

        if (start == NULL) {
            start = temp;
            p = temp;
        } else {
            p->next = temp;
            p = temp;
        }
    }

    // Traversing linked list 
    struct node *ptr = start;
    while (ptr != NULL) {
        printf("%d | %p --> ", ptr->data, ptr->next);
        ptr = ptr->next;
    }
    printf("NULL\n"); // Indicate the end of the list

    // Freeing the allocated memory
    ptr = start;
    while (ptr != NULL) {
        struct node *temp = ptr;
        ptr = ptr->next;
        temp->next = NULL;
        free(temp);
    }

    return 0; // Return success
}














int practice(){
    // int n;
    // printf("enter the no.of nodes : ");
    // scanf("%d",&n);
    // struct node *start = NULL;
    // struct node *p = NULL;
  
    // for(int i =1 ; i<=n;i++){
    //     struct node *temp = NULL;
    //     int data;
    //     printf("enter the %d node data : ",i);
    //     scanf("%d",&data);
    //     temp->data = data;
    //     temp->next = NULL;
    //     if(start==NULL){
    //     start = temp;
    //     p = temp;
    //     }
    //     else{
    //         p->next = temp;
    //         p = temp;
    //     }
        
    //     return 0;
    // }
    
    
    // // traversing linked list 
    // struct node *ptr = start;
    // while(ptr!=NULL){
    //     printf("%d | %p -->",ptr->data,ptr->next);
    //     ptr = ptr->next;
    // } 


    
}