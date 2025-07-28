#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
void Traverse(struct node *start){
    if(start == NULL){
        printf("\n==== List is Empty ====\n");
    }else{
        struct node* ptr = start;
        printf("Single Linked List :");
        while(ptr != NULL){
            printf(" %d ->",ptr->data);
            ptr = ptr->next;
        }printf(" NULL\n");
    }
}
struct node * Reverse_Sll(){
    if(start == NULL || start->next==NULL){
        return start;
    }
        struct node * reverse = NULL;
        // inserting every node to front
        struct node * ptr = start;
        while(ptr != NULL){
            struct node* temp = reverse;
            struct node* store = ptr->next;
            reverse = ptr;
            reverse->next = temp;
            ptr = store;
        }
    return reverse;
}
int main(){
    int n;
    printf("enetr number of nodes : ");
    scanf("%d",&n);
    struct node * ptr;
    for (int i = 1; i <= n; i++){
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        printf("enter the %d data :",i);
        scanf("%d",&temp->data);
        temp->next = NULL;
        if(start == 0){
            start = temp;
            ptr = start;
        }else{
            ptr->next = temp;
            ptr = ptr->next;
        }
    }
    Traverse(start);
    struct node * reverse = Reverse_Sll();
    Traverse(reverse);
}

