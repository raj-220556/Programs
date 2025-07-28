#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* prev;
    int data;
    struct node* next;
}Node;

void Traversing_dcll(Node* start){
    printf("\nDouble Circular Linked List :\n");
    if(start == NULL){
        printf("    ====EMPTY====   ");
    }else{
        Node* ptr = start;
        do{
            printf("%d <--> ",ptr->data);
            ptr = ptr->next;
        }while(ptr != start);
        printf("START(%d)\n",start->data);
    }
}

int main(){
    int n,data;
    struct node * start = NULL;
    struct node * ptr = NULL;
    printf("enter no.of nodes:");
    scanf("%d",&n);
    for(int i = 0;i < n; i++){
        printf("enter %d node data :",i+1);
        scanf("%d",&data);
        struct node * temp = (struct node*)malloc(sizeof(struct node*)); 
        if(temp == NULL){
            printf("Memory allocation is Failed..");
        }
        temp->data = data;
        temp->prev = NULL;
        temp->next = NULL;
        if(start == NULL){
            start = temp;
            temp->next = start;
            ptr = start;
        }else{
            ptr->next = temp;
            temp->prev = ptr;
            temp->next = start;
            ptr = ptr->next;
        }
    }
    // Traversing of DCLL
    Traversing_dcll(start);
    // Freeing memory allocation
    if(start != NULL){
        ptr = start;
        do{
            Node * temp = ptr;
            ptr = ptr->next;
            temp->next = NULL;
            temp->prev = NULL;
            free(temp);
        }while(ptr != start);
    }

}

















