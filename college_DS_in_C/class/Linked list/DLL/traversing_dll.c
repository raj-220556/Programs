#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

void Traversing_dll(struct node* start){
    if(start == NULL){
        printf("Double Linked list is empty..");
    }else{
        while(start != NULL){
            printf(" %d -->",start->data);
            start = start->next;
        }printf(" NULL\n");
    }
}

int main(){
    int n;
    printf("enter no.of nodes :");
    scanf("%d",&n);
    struct node* start = NULL;
    struct node* ptr;
    for(int i = 0;i < n; i++){
        struct node* temp = (struct node *)malloc(sizeof(struct node));
        int data;
        printf("enter %d node data :",i+1);
        scanf("%d",&data);
        temp->data = data;
        temp->prev = NULL;
        temp->next = NULL;
        if(start == NULL){
            start = temp;
            ptr = start;
        }else{
            ptr->next = temp;
            temp->prev = ptr;
            ptr = ptr->next;
        }
    }

    //trversing dll
    printf("Created Double Linked list :\n");
    Traversing_dll(start);

    //freeing memory allocationt
    ptr = start;
    while(ptr != NULL){
        struct node* temp = ptr;
        ptr = ptr->next;
        temp-> prev = NULL;
        temp->next = NULL;
        free(temp);
    }

}